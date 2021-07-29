#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps)//˳���ĳ�ʼ��
{
	ps->a = NULL;//��ʼ����һ����ָ��NULL
	ps->size = 0;//��Ч���ݵĸ���Ϊ0
	ps->capacity = 0;//�����ռ�Ĵ�СΪ0
}

void SeqListPushBack(SL* ps, SQDataType x)//β��    ��β������һ������
{
	//���˾�Ҫ����
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//���newcapacity = ps->capacity == 0���͸�4���ռ�(���4�������ģ���1��2��3�����ԣ�
		                                                           //����0����)�����������0������ps->capacity��2��
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));//��������2��
		if (tmp == NULL)//�ж�realloc�Ƿ�ʧ��
		{
			printf("realloc fail\n");//����ʧ��
			exit(-1);
		}
		else//���ٳɹ�
		{
			ps->a = tmp;//���¿��ٵĿռ�tmp��ֵ��ps->a��
			ps->capacity = newcapacity;//���������size�ǲ���ģ���Ϊ����capacity����ˣ����洢����Ч���ݵĸ����ǲ���ģ�����size����
		}
	}
	ps->a[ps->size] = x;//��Ҫβ������ݲ���β��a[ps->size]����//size�����һ�����ݵ���һ��λ�õ��±꣨��Ϊ�±��Ǵ�0��ʼ�ģ���һ��ҪŪ���ף�  0 1 2 3 4
	ps->size++;//β����һ�����ݣ�������Ч���ݵĸ���Ҫ��1����Ϊβ��1�����ݺ��ܵ����ݶ���һ����
}


void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ


void SeqListPrint(SL* ps)//˳���Ĵ�ӡ
{
	for (int i = 0; i < ps->size; ++i)//ps->size����Ч���ݵĸ��������� i < ps->size
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}