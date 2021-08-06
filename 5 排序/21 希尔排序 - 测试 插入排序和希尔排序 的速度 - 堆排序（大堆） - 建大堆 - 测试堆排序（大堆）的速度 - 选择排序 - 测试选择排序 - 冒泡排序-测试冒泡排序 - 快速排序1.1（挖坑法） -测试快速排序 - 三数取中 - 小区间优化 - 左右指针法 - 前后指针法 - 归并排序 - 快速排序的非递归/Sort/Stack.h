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

void StackInit(ST* ps);//��ʼ��
void StackDestory(ST* ps);//����


//ջ�����롢ɾ������
void StackPush(ST* ps, STDataType x);//��ջ
void StackPop(ST* ps);//��ջ


STDataType StackTop(ST* ps);//����ջ��Ԫ��
int StackSize(ST* ps);//ջ��С
bool StackEmpty(ST* ps);//�ж�ջ�ǲ��ǿ�