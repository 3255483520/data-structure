#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

void QueueInit(Queue* pq)//初始化
{
	assert(pq);

	pq->head = pq->tail = NULL;
}

void QueueDestory(Queue* pq)//销毁
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


void QueuePush(Queue* pq, QDataType x)//队尾入
{
	assert(pq);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));//申请一个新的结点
	if (newnode == NULL)//判断开辟结点是否成功
	{
		printf("malloc fail\n");//开辟结点失败
		exit(-1);
	}
	//程序走到这里，说明开辟结点成功了

	newnode->data = x;//对新开辟的结点进行初始化
	newnode->next = NULL;

	if (pq->tail == NULL)//pq->tail等于空指针NULL时，说明该队列一个结点都没有
	{
		pq->head = pq->tail = newnode;//把新开辟的结点赋值给pq->head和pq->tail，（此时pq->head = pq->tail）
		//因为一个结点都没有，所以pq->head = pq->tail = newnode
	}
	else//该队列已经有结点时
	{
		pq->tail->next = newnode;
		pq->tail = newnode;

	}
}


void QueuePop(Queue* pq)//队头出
{
	assert(pq);
	assert(pq->head);//保证该队列不为空指针NULL

	//只有1个结点时，直接free掉就可以了
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;//free掉之后要置为空指针
	}
	else//有多个结点时
	{
		QNode* next = pq->head->next;//定义变量next来保存头结点head的下一个结点的地址
		free(pq->head);//free掉头head
		pq->head = next;//把next变成新的头pq->head
	}
}



QDataType QueueFront(Queue* pq)//取队头数据
{
	assert(pq);
	assert(pq->head);//判断是否为空

	return pq->head->data;
}



QDataType QueueBack(Queue* pq)//取队尾数据
{
	assert(pq);
	assert(pq->head);//判断是否为空

	return pq->tail->data;


}

int QueueSize(Queue* pq)//判断队列大小
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



bool QueueEmpty(Queue* pq)//判断队列是否为空
{
	assert(pq);

	return pq->head == NULL;
}