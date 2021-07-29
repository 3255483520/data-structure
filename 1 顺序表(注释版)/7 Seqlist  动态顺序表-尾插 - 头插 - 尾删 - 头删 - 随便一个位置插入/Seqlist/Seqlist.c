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
	assert(ps->size > 0);

	//ps->a[ps->size - 1]=0;//�������ǰ� βɾ ��������Ϊ0���������β������һ��ʼ����0����0ɾ���ٲ���0��û�����壬���������벻��Ҫ
	ps->size--;
}


void SeqListPopFront(SL* ps)//ͷɾ
{
	assert(ps->size > 0);

	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;
}


void SeqListInsert(SL* ps, int pos, SQDataType x)//���һ��λ�ò���
{
	assert(pos < ps->size);//0 1 2 3 4   ����һ�����ݣ�ֻ����4֮ǰ���в��� ��������4������룬�����λ��posҪС��size
	SeqListCheckCapacity(ps);//�ж���������������ѽ����ˣ�����������10�����Ѿ��洢��10�����ݣ���ʱ�����ѽ����ˣ�����Ҫ���¿��ٿռ䣨���ݣ�

	int end = ps->size - 1;//size-1�����һ�����ݵ��±�
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];//��pos�����������������Ų1λ
		--end;//end��1
	}
	ps->a[pos] = x;//������x����pos��
	ps->size++;////���һ��λ�ò���һ�����ݣ�������Ч���ݵĸ���Ҫ��1����Ϊ����1�����ݺ��ܵ����ݶ���һ����
}


void SeqListErase(SL* ps, int pos);//���һ��λ��ɾ��


void SeqListPrint(SL* ps)//˳���Ĵ�ӡ
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}