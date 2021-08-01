#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��������Ľṹ�ǳ�������������������������8������ṹ
//	1. ����˫��
//	2. ��ͷ������ͷ
//	3. ѭ������ѭ��
//
//��Ȼ����ô�������Ľṹ����������ʵ������û������ֽṹ��
//	1. ��ͷ�����ѭ�������ṹ�򵥣�һ�㲻�ᵥ�����������ݡ�ʵ���и�������Ϊ�������ݽṹ���ӽṹ�����ϣͰ��ͼ���ڽӱ�ȵȡ�
//	   �������ֽṹ�ڱ��������г��ֺܶࡣ
//	2. ��ͷ˫��ѭ�������ṹ��ӣ�һ�����ڵ����洢���ݡ�ʵ����ʹ�õ��������ݽṹ�����Ǵ�ͷ˫��ѭ��������������ṹ��Ȼ
///    �ṹ���ӣ�����ʹ�ô���ʵ���Ժ�ᷢ�ֽṹ������ܶ����ƣ�ʵ�ַ������ˣ��������Ǵ���ʵ���˾�֪���ˡ�

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode*prev;
	LTDataType data;
}ListNode;


ListNode* ListInit();//��ʼ��
void ListDestory(ListNode* phead);//����
void ListPrint(ListNode* phead);//��ӡ
void ListPushBack(ListNode* phead, LTDataType x);//β��
void ListPushFront(ListNode* phead, LTDataType x);//ͷ��
void ListPopFront(ListNode* phead);//ͷɾ
void ListPopBack(ListNode* phead);//βɾ

ListNode* ListFind(ListNode* phead, LTDataType x);//����
//��posλ��֮ǰ����x
void ListInsert(ListNode* pos, LTDataType x);
//ɾ��posλ�õ�ֵ
void ListErase(ListNode* pos);