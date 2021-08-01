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
	ListNode* tail = phead->prev;//找到最后一个节点（tail就是最后一个节点）
	ListNode* newnode = BuyListNode(x);//申请一个新的节点

	tail->next = newnode;//最后一个节点tail的next指向新的节点newnode                这部分是尾插的精华
	newnode->prev = tail;//新的节点newnode的prev指向最后一个节点tail
	newnode->next = phead;//新的节点newnode的next指向头phead
	phead->prev = newnode;//phead的prev指向新的节点newnode

}