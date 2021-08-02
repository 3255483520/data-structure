#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

void QueueInit(Queue* pq)//��ʼ��
{
	assert(pq);

	pq->head = pq->tail = NULL;
}

void QueueDestory(Queue* pq)//����
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;
}


void QueuePush(Queue* pq, QDataType x)//��β��
{
	assert(pq);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));//����һ���µĽ��
	if (newnode == NULL)//�жϿ��ٽ���Ƿ�ɹ�
	{
		printf("malloc fail\n");//���ٽ��ʧ��
		exit(-1);
	}
	//�����ߵ����˵�����ٽ��ɹ���

	newnode->data = x;//���¿��ٵĽ����г�ʼ��
	newnode->next = NULL;

	if (pq->tail == NULL)//pq->tail���ڿ�ָ��NULLʱ��˵���ö���һ����㶼û��
	{
		pq->head = pq->tail = newnode;//���¿��ٵĽ�㸳ֵ��pq->head��pq->tail������ʱpq->head = pq->tail��
		//��Ϊһ����㶼û�У�����pq->head = pq->tail = newnode
	}
	else//�ö����Ѿ��н��ʱ
	{
		pq->tail->next = newnode;
		pq->tail = newnode;

	}
}


void QueuePop(Queue* pq)//��ͷ��
{
	assert(pq);
	assert(pq->head);//��֤�ö��в�Ϊ��ָ��NULL

	//ֻ��1�����ʱ��ֱ��free���Ϳ�����
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;//free��֮��Ҫ��Ϊ��ָ��
	}
	else//�ж�����ʱ
	{
		QNode* next = pq->head->next;//�������next������ͷ���head����һ�����ĵ�ַ
		free(pq->head);//free��ͷhead
		pq->head = next;//��next����µ�ͷpq->head
	}
}



QDataType QueueFront(Queue* pq)//ȡ��ͷ����
{
	assert(pq);
	assert(pq->head);//�ж��Ƿ�Ϊ��

	return pq->head->data;
}



QDataType QueueBack(Queue* pq)//ȡ��β����
{
	assert(pq);
	assert(pq->head);//�ж��Ƿ�Ϊ��

	return pq->tail->data;


}

int QueueSize(Queue* pq)//�ж϶��д�С
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		++size;
		cur = cur->next;
	}

	return size;
}



bool QueueEmpty(Queue* pq)//�ж϶����Ƿ�Ϊ��
{
	assert(pq);

	return pq->head == NULL;
}