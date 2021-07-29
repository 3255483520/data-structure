#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//增删查改等接口函数
void SeqListInit(SL* ps)//顺序表的初始化
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)//容量不够要增容
{
	//满了就要扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));//扩容扩大2倍
		if (tmp == NULL)//判断realloc是否失败
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;//这个过程中size是不变的
		}
	}

}

void SeqListPushBack(SL* ps, SQDataType x)//尾插    在尾部插入一个数据
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPushFront(SL* ps, SQDataType x)//头插
{
	SeqListCheckCapacity(ps);
	//1 初始条件
	//2 结束条件
	//2 结束条件
	int end = ps->size - 1;//初始条件
	while (end >= 0)//结束条件
	{
		ps->a[end + 1] = ps->a[end];//结束条件
		--end;
	}
	ps->a[0] = x;//在这个过程中capacity是不动的
	ps->size++;
}


void SeqListPopBack(SL* ps)//尾删
{
	assert(ps->size > 0);

	//ps->a[ps->size - 1]=0;//这句代码是把 尾删 掉的数置为0，但是如果尾部的数一开始就是0，把0删除再补个0，没有意义，所以这句代码不需要
	ps->size--;
}


void SeqListPopFront(SL* ps)//头删
{
	assert(ps->size > 0);

	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;
}


void SeqListInsert(SL* ps, int pos, SQDataType x)//随便一个位置插入
{
	assert(pos < ps->size);//0 1 2 3 4   插入一个数据，只能在4之前进行插入 ，不能在4后面插入，插入的位置pos要小于size
	SeqListCheckCapacity(ps);//判断容量，如果容量已将满了（假如容量是10，而已经存储了10个数据，此时容量已将满了），需要重新开辟空间（增容）

	int end = ps->size - 1;//size-1是最后一个数据的下标
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];//把pos后面的数据依次往后挪1位
		--end;//end减1
	}
	ps->a[pos] = x;//把数据x插在pos处
	ps->size++;////随便一个位置插了一个数据，所以有效数据的个数要加1（因为插入1个数据后，总的数据多了一个）
}


void SeqListErase(SL* ps, int pos);//随便一个位置删除


void SeqListPrint(SL* ps)//顺序表的打印
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}