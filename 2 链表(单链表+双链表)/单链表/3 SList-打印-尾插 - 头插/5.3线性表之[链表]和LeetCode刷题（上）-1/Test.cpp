#define _CRT_SECURE_NO_WARNINGS 1
//SList:Signal List单链表
#include "SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;//需要一个指针plist，来存储第一个节点的地址，（这个不是野指针，就是赋值空指针，什么都不指向，啥都没有）
	SListPushBack(&plist, 1);//尾插       插入一些数据，插入几个节点（值）；1，2，3，4这几个值用底层节点存储起来
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPushFront(&plist, 0);//头插
	SListPrint(plist);


}

int main()
{
	TestSList1();

	return 0;
}