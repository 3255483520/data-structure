#define _CRT_SECURE_NO_WARNINGS 1

//˳���ʵ��
//	2.1����ṹ
//		˳�������һ�������ַ�����Ĵ洢��Ԫ���δ洢����Ԫ�ص����Խṹ��һ������²�������洢����������������ݵ���ɾ��ġ�
//˳���һ����Է�Ϊ��
//		1. ��̬˳���ʹ�ö�������洢��
//		2. ��̬˳���ʹ�ö�̬���ٵ�����洢��
//	// ˳���ľ�̬�洢
//	#define N 100
//	typedef int SLDataType;
//	typedef struct SeqList
//	{
//		SLDataType array[N]; // ��������
//		size_t size; // ��Ч���ݵĸ���
//	}SeqList;
//
//  // ˳���Ķ�̬�洢
// typedef struct SeqList
// {
//		SLDataType* array; // ָ��̬���ٵ�����
//		size_t size; // ��Ч���ݸ���
//		size_t capicity; // �����ռ�Ĵ�С
//	}SeqList;
//
//	2.2 �ӿ�ʵ�֣�
//��̬˳���ֻ������ȷ��֪����Ҫ��������ݵĳ�������̬˳���Ķ������鵼��N����
//�ˣ��ռ俪�����˷ѣ������˲����á�������ʵ�л�������ʹ�ö�̬˳���������Ҫ��̬
//�ķ���ռ��С��������������ʵ�ֶ�̬˳���



#pragma once

#include <stdio.h>
#include <string.h>//memeset������ͷ�ļ�

//��ǿ����Ŀ�ά����
#define MAX_SIZE 500 
typedef int SQDataType;

//˳���ľ�̬�洢
typedef struct SeqList
{
	SQDataType a[MAX_SIZE];//��������
	int size;//��Ч���ݵĸ���
}SL;



//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);//˳���ĳ�ʼ��(��һ���ӿں���һ�㶼�ǳ�ʼ��)