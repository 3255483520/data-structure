#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

//��̬˳���
//    1 �������ݣ��ռ䲻���ˣ�Ҫ����
//    2 Ҫ�����������δ洢��
//��̬˳���ȱ��
//    1 ����ռ䲻�������ݡ����ݻḶ��һ���������ģ���ο��ܴ���һ���Ŀռ��˷�
//    2 ͷ�������в����ҵĲ���ɾ��Ч�ʵ�--ʱ�临�Ӷ�O��N��

//��ν����
//  1 �ռ��ϣ�������ռ�
//  2 ��Ҫ������ռ�������ͷ�����м�Ĳ��룬�Ͳ���ҪŲ������

 

#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;//���¶���int����ΪSLTDataType   ����д���Է���洢�������͵�����
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};
typedef struct SListNode SLTNode;//���¶���struct SListNodeΪSLTNode

//����ı������ͷָ�룬��һ��ָ��
void SListPrint(SLTNode* phead);//�ȴ�ӡһ�£���ӡ�������


//���ܻ�ı������ͷָ�룬������ָ��
void SListPushBack(SLTNode** pphead, SLTDataType x);//β��  �����λ����ͷָ��pphead����һ���ڵ�ĵ�ַ�������������x��SLTDataType��int������
void SListPushFront(SLTNode** pphead, SLTDataType x);//ͷ��