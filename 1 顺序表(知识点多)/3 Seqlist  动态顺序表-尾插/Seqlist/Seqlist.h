#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//增强程序的可维护性
typedef int SQDataType;

//动态的
typedef struct SeqList
{
	SQDataType* a;//指向动态开辟的数组
	int size;//有效数据的个数
	int capacity;//容量空间的大小
}SL;



//增删查改等接口函数
void SeqListInit(SL* ps);//顺序表的初始化

void SeqListPrint(SL* ps);//顺序表的打印

void SeqListPushBack(SL* ps, SQDataType x);//尾插
void SeqListPushFront(SL* ps, SQDataType x);//头插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删
