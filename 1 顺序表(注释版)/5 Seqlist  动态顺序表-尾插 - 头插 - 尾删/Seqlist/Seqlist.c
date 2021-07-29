#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//容量不够要增容
{
	//满了就要扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));//扩容扩大2倍
		if (tmp == NULL)//判断realloc是否失败
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;//这个过程中size是不变的
		}
	}

}

void SeqListPushBack(SL* ps, SQDataType x)//尾插    在尾部插入一个数据
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//头插
{
	SeqListCheckCapacity(ps);
	//1 初始条件
	//2 结束条件
	//2 结束条件
	int end = ps->size - 1;//初始条件
	while (end >= 0)//结束条件
	{
		ps->a[end + 1] = ps->a[end];//结束条件
		--end;
	}
	ps->a[0] = x;//在这个过程中capacity是不动的
	ps->size++;
}


void SeqListPopBack(SL* ps)//尾删
{
	assert(ps->size > 0);//保证有效数据的个数不为0才可以删，如果一个数据都没有，是没办法删除的

	//ps->a[ps->size - 1]=0;//这句代码是把 尾删 掉的数置为0，但是如果尾部的数一开始就是0，把0删除再补个0，没有意义，所以这句代码不需要
	ps->size--;//尾删后，删掉了一个数据，所以总的有效数据减少了1个
}


void SeqListPopFront(SL* ps);//头删


void SeqListPrint(SL* ps)//顺序表的打印
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}