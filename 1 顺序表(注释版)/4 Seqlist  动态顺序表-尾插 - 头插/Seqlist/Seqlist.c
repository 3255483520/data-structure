#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//容量不够要增容   把增容部分的程序封装为一个函数
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
	SeqListCheckCapacity(ps);//容量不够要增容

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//头插
{
	SeqListCheckCapacity(ps);//容量不够要增容
	//1 初始条件
	//2 结束条件
	//3 迭代条件
	//0 1 2 3 4   头插，需要从后往前挪动（先把4往后挪动1位，再把3往后挪动1位到之前4在的位置，再把2往后挪动1位到之前3在的位置，
	//                                    再把1往后挪动1位到之前2在的位置，之前1所在的位置用来头插一个新的数据）
	int end = ps->size - 1;//初始条件      size - 1是最后一个数据的下标                     
	while (end >= 0)//结束条件
	{
		ps->a[end + 1] = ps->a[end];//迭代条件    依次把0 1 2 3 4往后挪动1位，从后往前挪动（先挪4，后挪3，再挪2，最后挪1）
		--end;//每挪动1个有效数据后，end要进行减1操作
	}
	ps->a[0] = x;//把x插在头部       在这个过程中容量capacity是不动的
	ps->size++;//头插了一个数据，所以有效数据的个数要加1（因为头插1个数据后，总的数据多了一个）
}


void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删


void SeqListPrint(SL* ps)//顺序表的打印
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}