#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;

}ST;

void StackInit(ST* ps);//初始化
void StackDestory(ST* ps);//销毁


//栈顶插入、删除数据
void StackPush(ST* ps, STDataType x);//入栈
void StackPop(ST* ps);//出栈


STDataType StackTop(ST* ps);//返回栈顶元素
int StackSize(ST* ps);//栈大小
bool StackEmpty(ST* ps);//判断栈是不是空