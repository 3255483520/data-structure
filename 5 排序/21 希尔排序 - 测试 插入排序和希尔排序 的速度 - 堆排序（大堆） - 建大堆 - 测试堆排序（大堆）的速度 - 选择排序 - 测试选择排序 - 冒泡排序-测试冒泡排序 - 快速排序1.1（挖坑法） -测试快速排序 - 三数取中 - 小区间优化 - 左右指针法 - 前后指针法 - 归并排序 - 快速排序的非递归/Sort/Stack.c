#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void StackInit(ST* ps)//初始化
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType)* 4);//给4个空间
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;//给了4个空间，所以容量是4
	ps->top = 0;
}

void StackDestory(ST* ps)//销毁
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}



//栈顶插入、删除数据
void StackPush(ST* ps, STDataType x)//入栈
{
	assert(ps);

	//满了--增容
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)//扩容失败
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else//扩容成功
		{
			ps->a = tmp;//ps->top是保持不变的
			ps->capacity *= 2;
		}
	}

	ps->a[ps->top] = x;
	ps->top++;
}


void StackPop(ST* ps)//出栈
{
	assert(ps);
	assert(ps->top > 0);//判断栈不为空，因为如果栈为空，再进行出栈操作是错误的   栈空了，再去调用StackPop函数，直接中止程序报错

	//ps->a[ps->top - 1] = 0;//这句代码要不要都可以，最好不要，这句代码是把数组a的ps->top - 1位置元素置为0，但如果这个位置的元素本身就是0，那么
	//再把数组a的ps->top - 1位置元素置为0，这个操作毫无意义
	ps->top--;
}


STDataType StackTop(ST* ps)//返回栈顶元素
{
	assert(ps);
	assert(ps->top > 0);//判断栈不为空，因为如果栈为空，再去调用StackTop函数，直接中止程序报错

	return ps->a[ps->top - 1];
}


int StackSize(ST* ps)//栈大小
{
	assert(ps);

	return ps->top;
}


bool StackEmpty(ST* ps)//判断栈是不是空
{
	assert(ps);

	return ps->top == 0;
}