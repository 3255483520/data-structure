#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	ps->a = NULL;//初始化给一个空指针NULL
	ps->size = 0;//有效数据的个数为0
	ps->capacity = 0;//容量空间的大小为0
}

void SeqListPushBack(SL* ps, SQDataType x)//尾插    在尾部插入一个数据
{
	//满了就要扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//如果newcapacity = ps->capacity == 0，就给4个空间(这个4是随便给的，给1，2，3都可以，
		                                                           //不是0就行)，如果不等于0，就是ps->capacity的2倍
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));//扩容扩大2倍
		if (tmp == NULL)//判断realloc是否失败
		{
			printf("realloc fail\n");//开辟失败
			exit(-1);
		}
		else//开辟成功
		{
			ps->a = tmp;//把新开辟的空间tmp赋值给ps->a，
			ps->capacity = newcapacity;//这个过程中size是不变的，因为容量capacity变大了，但存储的有效数据的个数是不变的，所以size不变
		}
	}
	ps->a[ps->size] = x;//把要尾插的数据插在尾部a[ps->size]处，//size是最后一个数据的下一个位置的下标（因为下标是从0开始的，这一点要弄明白）  0 1 2 3 4
	ps->size++;//尾插了一个数据，所以有效数据的个数要加1（因为尾插1个数据后，总的数据多了一个）
}


void SeqListPushFront(SL* ps, SQDataType x);//头插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删


void SeqListPrint(SL* ps)//顺序表的打印
{
	for (int i = 0; i < ps->size; ++i)//ps->size是有效数据的个数，所以 i < ps->size
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}