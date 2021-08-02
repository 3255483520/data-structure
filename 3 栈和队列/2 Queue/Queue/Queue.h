#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;


typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;


void QueueInit(Queue* pq);//初始化
void QueueDestory(Queue* pq);//销毁

void QueuePush(Queue* pq, QDataType x);//队尾入
void QueuePop(Queue* pq);//队头出

QDataType QueueFront(Queue* pq);//取队头数据
QDataType QueueBack(Queue* pq);//取队尾数据

int QueueSize(Queue* pq);//判断队列大小
bool QueueEmpty(Queue* pq);//判断队列是否为空