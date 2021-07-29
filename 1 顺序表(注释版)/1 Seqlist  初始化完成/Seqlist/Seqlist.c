#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);//初始化数组:SQDataType a[MAX_SIZE],memset是对字节初始化，sizeof(SQDataType)*MAX_SIZE是字节总数
	                                              //0是把数组的每一个元素都初始化为0
	ps->size = 0;//一开始数组里面一个数据都没有，所以size是0
}