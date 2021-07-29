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
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 11);

	SeqListPrint(&s1);
}


void TestSeqList2()
{
	SL s1;
	SeqListInit(&s1);//传地址

	SeqListPushFront(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 6);

	SeqListPrint(&s1);
}


int main()
{
	TestSeqList2();

	return 0;
}