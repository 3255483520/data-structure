#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListPrint(SLTNode* phead)//��ӡ����
{
	SLTNode* cur = phead;//��phead��ֵ����ǰλ��cur
	while (cur != NULL)//�����ڿ�ָ����������ڿ�ָ��NULL����
	{
		printf("%d->", cur->data);//��ӡcurָ�������data
		cur = cur->next;//����һ����ַcur->next��ֵ��cur,��֤cur�ĵ�ַ��������
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)//��̬����һ���ڵ�ռ�
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));//Ҫβ��һ���ڵ㣬��Ҫmalloc��̬����һ���ڵ�ռ������
	newnode->data = x;//��Ҫβ���x�ŵ�������Ľڵ�newnode��dataλ�ô�
	newnode->next = NULL;//��������Ľڵ�newnode��nextλ�ô�ָ���ָ��NULL

	return newnode;
}


void SListPushBack(SLTNode** pphead, SLTDataType x)//β��   �����ڲ���֮ǰ���нڵ��β���û�нڵ��β���ǲ�ͬ�������
                                                            //��Ҫ�ֿ����ۣ����������������Ϊ�պ�����Ϊ��
{
	SLTNode* newnode = BuySListNode(x);//���ú���BuySListNode������һ���ڵ�

	//��β�˲���һ���ڵ㣬�ж�phead�ǲ���Ϊ��ָ��NULL
	if (*pphead == NULL)//����Ϊ�յ������������Ϊ�գ�û��һ���ڵ㣬�Լ�malloc������һ���ڵ�newnodeֱ�Ӹ�ֵ��phead���У�  ����Ϊ�յ����  
	{
		*pphead = newnode;
	}
	else//������һ���ڵ㣬����������һ���ڵ������        ����Ϊ�յ����
	{
		//��β�ڵ��ָ��
		SLTNode* tail = *pphead;//��ΪҪβ�壬����Ҫ����β�ڵ��ָ��tail����head��ֵ��tail
		while (tail->next != NULL)//Ҫ�ҵ�β���ж�tail->next�ǲ��ǿ�ָ��NULL��
		{
			tail = tail->next;//����һ����ַtail->next��ֵ��tail
		}
		//β�ڵ㣬�����½ڵ㣨�ҵ�Ϊ�ڵ�ĵ�ַ��
		tail->next = newnode;//�Ѵ������µĽڵ�newnode�ĵ�ַ���浽β�ڵ�tail->nextλ�ô�
	}
}


void SListPushFront(SLTNode** pphead, SLTDataType x)//ͷ��   �����ڲ���֮ǰ���нڵ��ͷ���û�нڵ��ͷ����һ������������÷ֿ�����
{
	SLTNode* newnode = BuySListNode(x);//���ú���BuySListNode������һ���ڵ�

	newnode->next = *pphead;//�ѵ�һ���ڵ�ĵ�ַphead��ֵ��������Ľڵ�newnode��next
	*pphead = newnode;//phead����洢������Ľڵ�newnode�ĵ�ַ
}