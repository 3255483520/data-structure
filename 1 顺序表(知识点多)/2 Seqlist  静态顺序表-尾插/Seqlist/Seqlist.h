#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <string.h>

//��ǿ����Ŀ�ά����
#define MAX_SIZE 10 
typedef int SQDataType;
//˳����ص㣺
//  1 ����������ռ�洢--����
//  2 ���ݱ����Ǵ�ͷ��ʼ�����δ洢

//��̬˳���
//     ���⣺�����˲����ã��������ò����˷ѣ�����������

typedef struct SeqList
{
	SQDataType a[MAX_SIZE];
	int size;
}SL;



//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);//˳���ĳ�ʼ��
void SeqListPushBack(SL* ps, SQDataType x);//β��
void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ
