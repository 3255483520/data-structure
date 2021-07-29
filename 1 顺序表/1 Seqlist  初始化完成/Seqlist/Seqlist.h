#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <string.h>

//增强程序的可维护性
#define MAX_SIZE 500 
typedef int SQDataType;

typedef struct SeqList
{
	SQDataType a[MAX_SIZE];
	int size;
}SL;



//增删查改等接口函数
void SeqListInit(SL* ps);//顺序表的初始化