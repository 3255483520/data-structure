#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <string.h>

//增强程序的可维护性
#define MAX_SIZE 10 
typedef int SQDataType;
//顺序表特点：
//  1 连续的物理空间存储--数组
//  2 数据必须是从头开始，依次存储

//静态顺序表
//     问题：给少了不够用，给多了用不完浪费，不能灵活控制

typedef struct SeqList
{
	SQDataType a[MAX_SIZE];
	int size;
}SL;



//增删查改等接口函数
void SeqListInit(SL* ps);//顺序表的初始化
void SeqListPushBack(SL* ps, SQDataType x);//尾插
void SeqListPushFront(SL* ps, SQDataType x);//头插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删
