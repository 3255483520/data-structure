#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void StackInit(ST* ps)//��ʼ��
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType)* 4);//��4���ռ�
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;//����4���ռ䣬����������4
	ps->top = 0;
}

void StackDestory(ST* ps)//����
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}



//ջ�����롢ɾ������
void StackPush(ST* ps, STDataType x)//��ջ
{
	assert(ps);

	//����--����
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)//����ʧ��
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else//���ݳɹ�
		{
			ps->a = tmp;//ps->top�Ǳ��ֲ����
			ps->capacity *= 2;
		}
	}

	ps->a[ps->top] = x;
	ps->top++;
}


void StackPop(ST* ps)//��ջ
{
	assert(ps);
	assert(ps->top > 0);//�ж�ջ��Ϊ�գ���Ϊ���ջΪ�գ��ٽ��г�ջ�����Ǵ����   ջ���ˣ���ȥ����StackPop������ֱ����ֹ���򱨴�

	//ps->a[ps->top - 1] = 0;//������Ҫ��Ҫ�����ԣ���ò�Ҫ���������ǰ�����a��ps->top - 1λ��Ԫ����Ϊ0����������λ�õ�Ԫ�ر������0����ô
	//�ٰ�����a��ps->top - 1λ��Ԫ����Ϊ0�����������������
	ps->top--;
}


STDataType StackTop(ST* ps)//����ջ��Ԫ��
{
	assert(ps);
	assert(ps->top > 0);//�ж�ջ��Ϊ�գ���Ϊ���ջΪ�գ���ȥ����StackTop������ֱ����ֹ���򱨴�

	return ps->a[ps->top - 1];
}


int StackSize(ST* ps)//ջ��С
{
	assert(ps);

	return ps->top;
}


bool StackEmpty(ST* ps)//�ж�ջ�ǲ��ǿ�
{
	assert(ps);

	return ps->top == 0;
}