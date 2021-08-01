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
	assert(phead);

	ListNode* cur = phead->next;//当前cur是phead的next，因为在 带头双向循环链表 中，头phead是不存储数据的
	while (cur != phead)//cur等于phead结束，不等于phead继续
	{
		ListNode* next = cur->next;//free掉cur之前，要保存cur的下一个地址，下一个地址定义为next
		free(cur);

		cur = next;//free(cur)销毁cur后，再把下一个地址next赋值给cur
	}

	free(phead);//所有的完了之后，也要free掉头节点phead
	phead = NULL;

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

	//ListNode* tail = phead->prev;//找到最后一个节点（tail就是最后一个节点）
	//ListNode* newnode = BuyListNode(x);//申请一个新的节点

	//tail->next = newnode;//最后一个节点tail的next指向新的节点newnode                这部分是尾插的精华
	//newnode->prev = tail;//新的节点newnode的prev指向最后一个节点tail
	//newnode->next = phead;//新的节点newnode的next指向头phead
	//phead->prev = newnode;//phead的prev指向新的节点newnode

	ListInsert(phead, x);//在phead前面插入x(这个就相当于尾插x)

}


void ListPushFront(ListNode* phead, LTDataType x)//头插
{
	assert(phead);

	//ListNode* first = phead->next;//把head后面指向的节点定义为第一个节点first
	//ListNode* newnode = BuyListNode(x);//申请一个新的节点

	////phead newnode first 这3个节点的链接关系
	//phead->next = newnode;//phead的next指向新节点newnode
	//newnode->prev = phead;//newnode的prev指向头phead
	//newnode->next = first;//newnode的next指向节点first
	//first->prev = newnode;//first的prev指向新节点newnode


	ListInsert(phead->next,x);//在phead的后面插入x,也就是在phead后面一个数据前面插入x

}


void ListPopFront(ListNode* phead)//头删
{
	assert(phead);
	//assert(phead->next != phead);//如果phead的next等于phead，说明链表里面一个节点都没有了，就不需要删除了，所以需要判断一下，没有这句话，
	//                             //链表为空时，phead=first=second，会把头phead也删除掉，进而free(first)也会把头phead释放，这样有问题，
	//                             //不能把头phead也释放掉
	//                             
	//ListNode* first = phead->next;//把head后面指向的节点定义为第一个节点first
	//ListNode* second = first->next;//把第一个节点first后面指向的节点定义为第二个节点second
	//phead->next = second;//phead的next指向第二个节点second
	//second->prev = phead;//第二个节点的prev指向头phead


	//free(first);//释放掉第一个节点first
	//first = NULL;//第一个节点置为空指针NULL

	ListErase(phead->next);

}


void ListPopBack(ListNode* phead)//尾删
{
	assert(phead);
	//assert(phead->next != phead);//如果phead的next等于phead，说明链表里面一个节点都没有了，就不需要删除了，所以需要判断一下，没有这句话，
	////链表为空时，phead=prev=tail，会把头phead也删除掉，进而free(tail)也会把头phead释放，这样有问题，
	////不能把头phead也释放掉

	//ListNode* tail = phead->prev;//phead的prev指向的是最后一个节点，tail定义为最后一个节点
	//ListNode* prev = tail->prev;//最后一个节点tail的prev指向倒数第二个节点prev，prev定义为倒数第二个节点
	// 
	////删除最后一个节点tail后
	//prev->next = phead;//倒数第二个节点prev的next指向头phead
	//phead->prev = prev;//phead的prev指向倒数第二个节点prev

	//free(tail);//释放掉最后一个节点tail
	//tail = NULL;//最后一个节点置为空指针NULL


	ListErase(phead->prev);

}


ListNode* ListFind(ListNode* phead, LTDataType x)//查找
{
	assert(phead);

	ListNode* cur = phead->next;//把phead的next当做当前位置cur（phead的next也就是前面说的第一个节点first）
	while (cur != phead)//cur 不等于phead时继续进入while循环   （这个while循环是在遍历这个链表，看看能不能找到x）
	{
		if (cur->data == x)//cur的data等于x，返回cur
		{
			return cur;//找到了，返回这个节点的指针cur
		}
		cur = cur->next;//把cur的next赋值给cur，继续进入while循环
	}
	//程序走到这里，就说明没有找到，返回空指针
	return NULL;
}



//在pos之前插入x
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);//要插入的话，pos不能为空指针

	ListNode* prev = pos->prev;//找到的位置是pos，pos前面的一个节点定义为prev，pos指向的prev就是pos前面的节点prev
	ListNode* newnode = BuyListNode(x);//申请一个新的节点

	//prev  newnode pos  这3个节点的链接关系
	prev->next = newnode;// prev(是pos前面的那个节点)的next指向新的节点newnode
	newnode->prev = prev;//新的节点newnode的prev((这个prev不是pos前面的那个节点))指向prev(这个prev是pos前面的那个节点)
	newnode->next = pos;//newnode的next指向找到的位置pos
	pos->prev = newnode;//pos的prev指向新节点newnode

}

//删除pos位置的值
void ListErase(ListNode* pos)
{
	assert(pos);//要删的话，pos不能为空指针

	ListNode* prev = pos->prev;//找到的位置是pos，pos前面的一个节点定义为prev，pos指向的prev就是pos前面的节点prev
	ListNode* next = pos->next;//找到的位置是pos，pos后面的一个节点定义为next，pos指向的next就是pos后面的节点next
	
	//删除掉pos位置的节点后
	prev->next = next;//节点prev的next（这个next不是节点）指向节点next（这个next是节点，pos后面的那个节点）
	next->prev = prev;//节点next的prev（这个prev不是节点）指向节点prev（这个prev是节点，pos前面的那个节点）

	free(pos);//释放掉pos位置的节点

}