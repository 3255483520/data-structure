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

void ListDestory(ListNode* phead)//����
{


}

void ListPrint(ListNode* phead)//��ӡ
{
	ListNode* cur = phead->next;//��ǰcur��phead��next����Ϊ�� ��ͷ˫��ѭ������ �У�ͷphead�ǲ��洢���ݵ�
	while (cur != phead)//cur����phead������������phead����
	{
		printf("%d ",cur->data);//��ӡcurָ���data
		cur = cur->next;//��cur��next��ֵ��cur
	}
	printf("\n");
}

void ListPushBack(ListNode* phead, LTDataType x)//β��           ����Ϊ��ָ��NULL�Ͳ�Ϊ��ָ��NULL������
{
	assert(phead);//����

	ListNode* tail = phead->prev;//�ҵ����һ���ڵ㣨tail�������һ���ڵ㣩
	ListNode* newnode = BuyListNode(x);//����һ���µĽڵ�

	tail->next = newnode;//���һ���ڵ�tail��nextָ���µĽڵ�newnode                �ⲿ����β��ľ���
	newnode->prev = tail;//�µĽڵ�newnode��prevָ�����һ���ڵ�tail
	newnode->next = phead;//�µĽڵ�newnode��nextָ��ͷphead
	phead->prev = newnode;//phead��prevָ���µĽڵ�newnode

}


void ListPushFront(ListNode* phead, LTDataType x)//ͷ��
{
	assert(phead);

	ListNode* first = phead->next;//��head����ָ��Ľڵ㶨��Ϊ��һ���ڵ�first
	ListNode* newnode = BuyListNode(x);//����һ���µĽڵ�

	//phead newnode first ��3���ڵ�����ӹ�ϵ
	phead->next = newnode;//phead��nextָ���½ڵ�newnode
	newnode->prev = phead;//newnode��prevָ��ͷphead
	newnode->next = first;//newnode��nextָ��ڵ�first
	first->prev = newnode;//first��prevָ���½ڵ�newnode

}


void ListPopFront(ListNode* phead);//ͷɾ
void ListPopBack(ListNode* phead);//βɾ