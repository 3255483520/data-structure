#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <string.h>

//��ǿ����Ŀ�ά����
#define MAX_SIZE 500 
typedef int SQDataType;

typedef struct SeqList
{
	SQDataType a[MAX_SIZE];
	int size;
}SL;



//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);//˳���ĳ�ʼ��