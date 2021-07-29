#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);
	ps->size = 0;
}

void SeqListPushBack(SL* ps, SQDataType x)//尾插    在尾部插入一个数据
{
	if (ps->size >= MAX_SIZE) //MAX_SIZE的值是10   判断顺序表是否已满，如果满了，尾插就插不进去      
	{
		printf("SeqList is Full\n");       
		return;
	}
	ps->a[ps->size] = x;//size是最后一个数据的下一个位置的下标（因为下标是从0开始的，这一点要弄明白）   0 1 2 3 4
	ps->size++;//尾插了一个数据，所以有效数据的个数要加1（因为尾插1个数据后，总的数据多了一个）
}


void SeqListPushFront(SL* ps, SQDataType x);//头插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删