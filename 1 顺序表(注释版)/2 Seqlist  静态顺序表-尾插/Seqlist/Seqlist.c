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
	if (ps->size >= MAX_SIZE) //MAX_SIZE��ֵ��10   �ж�˳����Ƿ�������������ˣ�β��Ͳ岻��ȥ      
	{
		printf("SeqList is Full\n");       
		return;
	}
	ps->a[ps->size] = x;//size�����һ�����ݵ���һ��λ�õ��±꣨��Ϊ�±��Ǵ�0��ʼ�ģ���һ��ҪŪ���ף�   0 1 2 3 4
	ps->size++;//β����һ�����ݣ�������Ч���ݵĸ���Ҫ��1����Ϊβ��1�����ݺ��ܵ����ݶ���һ����
}


void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ