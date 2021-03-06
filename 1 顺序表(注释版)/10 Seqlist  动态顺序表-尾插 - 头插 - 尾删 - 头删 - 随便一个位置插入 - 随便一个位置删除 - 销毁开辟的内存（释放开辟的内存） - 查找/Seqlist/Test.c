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

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);//尾删3次
	SeqListPrint(&s1);

	SeqListPopFront(&s1);//头删1次
	SeqListPrint(&s1);

}



void TestSeqList3()
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

	SeqListInsert(&s1,1,20);//在5的前面插入20
	SeqListPrint(&s1);

	SeqListErase(&s1, 1);//把20删除
	SeqListPrint(&s1);

	SeqListDestory(&s1);//销毁开辟的内存（释放开辟的内存）
}


int main()
{
	TestSeqList3();

	return 0;
}