#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));//����һ���µĽڵ�newnode
	newnode->data = x;//newnodeָ���data��ֵx
	newnode->next = NULL;//newnodeָ���next��ֵ��ָ��NULL
	newnode->prev = NULL;//newnodeָ���prev��ֵ��ָ��NULL

	return newnode;
}


ListNode* ListInit()//��ʼ��
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;//phead��nextҪָ���Լ�phead
	phead->prev = phead;//phead��prevҪָ���Լ�phead

	return phead;
}


void ListDestory(ListNode* plist)//����
{


}
void ListPushBack(ListNode* plist, LTDataType x);//β��