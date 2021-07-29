#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);//传地址

	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 9);
	SeqListPushBack(&s1, 10);
	SeqListPushBack(&s1, 11);//插入11个数据,而MAX_SIZE的值是10，所以只能插入10个元素，这个程序会打印：SeqList is Full
}

int main()
{
	TestSeqList1();

	return 0;
}