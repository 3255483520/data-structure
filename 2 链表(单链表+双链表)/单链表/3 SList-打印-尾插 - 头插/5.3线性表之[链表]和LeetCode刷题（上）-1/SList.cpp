#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListPrint(SLTNode* phead)//打印函数
{
	SLTNode* cur = phead;//把phead赋值给当前位置cur
	while (cur != NULL)//不等于空指针继续，等于空指针NULL结束
	{
		printf("%d->", cur->data);//打印cur指向的数据data
		cur = cur->next;//把下一个地址cur->next赋值给cur,保证cur的地址逐渐往后走
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)//动态申请一个节点空间
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));//要尾插一个节点，需要malloc动态申请一个节点空间出来，
	newnode->data = x;//把要尾插的x放到新申请的节点newnode的data位置处
	newnode->next = NULL;//把新申请的节点newnode的next位置处指向空指针NULL

	return newnode;
}


void SListPushBack(SLTNode** pphead, SLTDataType x)//尾插   链表在插入之前：有节点的尾插和没有节点的尾插是不同的情况，
                                                            //需要分开讨论，分两种情况，链表为空和链表不为空
{
	SLTNode* newnode = BuySListNode(x);//调用函数BuySListNode，申请一个节点

	//在尾端插入一个节点，判断phead是不是为空指针NULL
	if (*pphead == NULL)//链表为空的链表（这个链表为空，没有一个节点，自己malloc出来的一个节点newnode直接赋值给phead就行）  链表为空的情况  
	{
		*pphead = newnode;
	}
	else//至少有一个节点，链表至少有一个节点的链表        链表不为空的情况
	{
		//找尾节点的指针
		SLTNode* tail = *pphead;//因为要尾插，所以要定义尾节点的指针tail，把head赋值给tail
		while (tail->next != NULL)//要找到尾，判断tail->next是不是空指针NULL，
		{
			tail = tail->next;//把下一个地址tail->next赋值给tail
		}
		//尾节点，链接新节点（找到为节点的地址）
		tail->next = newnode;//把创建的新的节点newnode的地址保存到尾节点tail->next位置处
	}
}


void SListPushFront(SLTNode** pphead, SLTDataType x)//头插   链表在插入之前：有节点的头插和没有节点的头插是一样的情况，不用分开讨论
{
	SLTNode* newnode = BuySListNode(x);//调用函数BuySListNode，申请一个节点

	newnode->next = *pphead;//把第一个节点的地址phead赋值给新申请的节点newnode的next
	*pphead = newnode;//phead里面存储新申请的节点newnode的地址
}