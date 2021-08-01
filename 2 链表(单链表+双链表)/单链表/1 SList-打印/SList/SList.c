#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListPrint(SLTNode* phead)//打印函数
{
	SLTNode* cur = phead;//把phead赋值给当前位置cur
	while (cur != NULL)//不等于空指针继续，等于空指针NULL结束
	{
		printf("%d", cur->data);//打印cur指向的数据data
		cur = cur->next;//把下一个地址cur->next赋值给cur,保证cur的地址逐渐往后走
	}
}