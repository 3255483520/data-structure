#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps)//˳���ĳ�ʼ��
{
	memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);
	ps->size = 0;
}

void SeqListPushBack(SL* ps, SQDataType x)//β��    ��β������һ������
{
	if (ps->size >= MAX_SIZE)       
	{
		printf("SeqList is Full\n");       
		return;
	}
	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ