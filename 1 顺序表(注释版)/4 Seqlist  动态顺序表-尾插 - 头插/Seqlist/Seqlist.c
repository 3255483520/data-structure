#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps)//˳���ĳ�ʼ��
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//��������Ҫ����   �����ݲ��ֵĳ����װΪһ������
{
	//���˾�Ҫ����
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));//��������2��
		if (tmp == NULL)//�ж�realloc�Ƿ�ʧ��
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;//���������size�ǲ����
		}
	}

}

void SeqListPushBack(SL* ps, SQDataType x)//β��    ��β������һ������
{
	SeqListCheckCapacity(ps);//��������Ҫ����

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//ͷ��
{
	SeqListCheckCapacity(ps);//��������Ҫ����
	//1 ��ʼ����
	//2 ��������
	//3 ��������
	//0 1 2 3 4   ͷ�壬��Ҫ�Ӻ���ǰŲ�����Ȱ�4����Ų��1λ���ٰ�3����Ų��1λ��֮ǰ4�ڵ�λ�ã��ٰ�2����Ų��1λ��֮ǰ3�ڵ�λ�ã�
	//                                    �ٰ�1����Ų��1λ��֮ǰ2�ڵ�λ�ã�֮ǰ1���ڵ�λ������ͷ��һ���µ����ݣ�
	int end = ps->size - 1;//��ʼ����      size - 1�����һ�����ݵ��±�                     
	while (end >= 0)//��������
	{
		ps->a[end + 1] = ps->a[end];//��������    ���ΰ�0 1 2 3 4����Ų��1λ���Ӻ���ǰŲ������Ų4����Ų3����Ų2�����Ų1��
		--end;//ÿŲ��1����Ч���ݺ�endҪ���м�1����
	}
	ps->a[0] = x;//��x����ͷ��       ���������������capacity�ǲ�����
	ps->size++;//ͷ����һ�����ݣ�������Ч���ݵĸ���Ҫ��1����Ϊͷ��1�����ݺ��ܵ����ݶ���һ����
}


void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ


void SeqListPrint(SL* ps)//˳���Ĵ�ӡ
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}