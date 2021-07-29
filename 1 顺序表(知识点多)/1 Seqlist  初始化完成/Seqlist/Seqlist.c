#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);
	ps->size = 0;
}