#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps)//˳���ĳ�ʼ��
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//��������Ҫ����
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
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//ͷ��
{
	SeqListCheckCapacity(ps);
	//1 ��ʼ����
	//2 ��������
	//2 ��������
	int end = ps->size - 1;//��ʼ����
	while (end >= 0)//��������
	{
		ps->a[end + 1] = ps->a[end];//��������
		--end;
	}
	ps->a[0] = x;//�����������capacity�ǲ�����
	ps->size++;
}


void SeqListPopBack(SL* ps)//βɾ
{
	assert(ps->size > 0);//��֤��Ч���ݵĸ�����Ϊ0�ſ���ɾ�����һ�����ݶ�û�У���û�취ɾ����

	//ps->a[ps->size - 1]=0;//�������ǰ� βɾ ��������Ϊ0���������β������һ��ʼ����0����0ɾ���ٲ���0��û�����壬���������벻��Ҫ
	ps->size--;//βɾ��ɾ����һ�����ݣ������ܵ���Ч���ݼ�����1��
}


void SeqListPopFront(SL* ps);//ͷɾ


void SeqListPrint(SL* ps)//˳���Ĵ�ӡ
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}