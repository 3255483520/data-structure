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


void ListDestory(ListNode* plist)//销毁
{


}
void ListPushBack(ListNode* plist, LTDataType x);//尾插