#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//��ǿ����Ŀ�ά����
typedef int SQDataType;

//��̬��
typedef struct SeqList
{
	SQDataType* a;//ָ��̬���ٵ�����
	int size;//��Ч���ݵĸ���
	int capacity;//�����ռ�Ĵ�С
}SL;



//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);//˳���ĳ�ʼ��

void SeqListPrint(SL* ps);//˳���Ĵ�ӡ

void SeqListDestory(SL* ps);//���ٿ��ٵ��ڴ棨�ͷſ��ٵ��ڴ棩


void SeqListPushBack(SL* ps, SQDataType x);//β��
void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ

void SeqListInsert(SL* ps, int pos, SQDataType x);//���һ��λ�ò���
void SeqListErase(SL* ps, int pos);//���һ��λ��ɾ��