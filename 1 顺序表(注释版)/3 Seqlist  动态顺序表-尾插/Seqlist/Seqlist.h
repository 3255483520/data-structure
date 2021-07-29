#define _CRT_SECURE_NO_WARNINGS 1

// ˳���Ķ�̬�洢
//   typedef struct SeqList
//   {
//		LDataType* array; // ָ��̬���ٵ�����
//		size_t size; // ��Ч���ݸ���
//		size_t capicity; // �����ռ�Ĵ�С
//   }SeqList;

#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void SeqListPushBack(SL* ps, SQDataType x);//β��
void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ
