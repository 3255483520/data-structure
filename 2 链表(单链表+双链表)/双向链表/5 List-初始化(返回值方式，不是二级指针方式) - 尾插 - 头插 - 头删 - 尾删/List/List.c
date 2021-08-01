#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));//申请一个新的节点newnode
	newnode->data = x;//newnode指向的data赋值x
	newnode->next = NULL;//newnode指向的next赋值空指针NULL
	newnode->prev = NULL;//newnode指向的prev赋值空指针NULL

	return newnode;
}


ListNode* ListInit()//初始化
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;//phead的next要指向自己phead
	phead->prev = phead;//phead的prev要指向自己phead

	return phead;
}

void ListDestory(ListNode* phead)//销毁
{


}

void ListPrint(ListNode* phead)//打印
{
	ListNode* cur = phead->next;//当前cur是phead的next，因为在 带头双向循环链表 中，头phead是不存储数据的
	while (cur != phead)//cur等于phead结束，不等于phead继续
	{
		printf("%d ",cur->data);//打印cur指向的data
		cur = cur->next;//把cur的next赋值给cur
	}
	printf("\n");
}

void ListPushBack(ListNode* phead, LTDataType x)//尾插           链表为空指针NULL和不为空指针NULL都可以
{
	assert(phead);//断言

	ListNode* tail = phead->prev;//找到最后一个节点（tail就是最后一个节点）
	ListNode* newnode = BuyListNode(x);//申请一个新的节点

	tail->next = newnode;//最后一个节点tail的next指向新的节点newnode                这部分是尾插的精华
	newnode->prev = tail;//新的节点newnode的prev指向最后一个节点tail
	newnode->next = phead;//新的节点newnode的next指向头phead
	phead->prev = newnode;//phead的prev指向新的节点newnode

}


void ListPushFront(ListNode* phead, LTDataType x)//头插
{
	assert(phead);

	ListNode* first = phead->next;//把head后面指向的节点定义为第一个节点first
	ListNode* newnode = BuyListNode(x);//申请一个新的节点

	//phead newnode first 这3个节点的链接关系
	phead->next = newnode;//phead的next指向新节点newnode
	newnode->prev = phead;//newnode的prev指向头phead
	newnode->next = first;//newnode的next指向节点first
	first->prev = newnode;//first的prev指向新节点newnode

}


void ListPopFront(ListNode* phead)//头删
{
	assert(phead);
	assert(phead->next != phead);//如果phead的next等于phead，说明链表里面一个节点都没有了，就不需要删除了，所以需要判断一下，没有这句话，
	                             //链表为空时，phead=first=second，会把头phead也删除掉，进而free(first)也会把头phead释放，这样有问题，
	                             //不能把头phead也释放掉
	                             
	ListNode* first = phead->next;//把head后面指向的节点定义为第一个节点first
	ListNode* second = first->next;//把第一个节点first后面指向的节点定义为第二个节点second
	phead->next = second;//phead的next指向第二个节点second
	second->prev = phead;//第二个节点的prev指向头phead


	free(first);//释放掉第一个节点first
	first = NULL;//第一个节点置为空指针NULL
}


void ListPopBack(ListNode* phead)//尾删
{
	assert(phead);
	assert(phead->next != phead);//如果phead的next等于phead，说明链表里面一个节点都没有了，就不需要删除了，所以需要判断一下，没有这句话，
	//链表为空时，phead=prev=tail，会把头phead也删除掉，进而free(tail)也会把头phead释放，这样有问题，
	//不能把头phead也释放掉

	ListNode* tail = phead->prev;//phead的prev指向的是最后一个节点，tail定义为最后一个节点
	ListNode* prev = tail->prev;//最后一个节点tail的prev指向倒数第二个节点prev，prev定义为倒数第二个节点
	 
	//删除最后一个节点tail后
	prev->next = phead;//倒数第二个节点prev的next指向头phead
	phead->prev = prev;//phead的prev指向倒数第二个节点prev

	free(tail);//释放掉最后一个节点tail
	tail = NULL;//最后一个节点置为空指针NULL

}