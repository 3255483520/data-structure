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

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);//头删，删除3个
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);//头删，删除5个


}



void TestSList2()
{
	SLTNode* plist = NULL;//需要一个指针plist，来存储第一个节点的地址，（这个不是野指针，就是赋值空指针，什么都不指向，啥都没有）
	SListPushBack(&plist, 1);//尾插       插入一些数据，插入几个节点（值）；1，2，3，4这几个值用底层节点存储起来
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPopBack(&plist);//尾删
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

}


void TestSList3()
{
	SLTNode* plist = NULL;//需要一个指针plist，来存储第一个节点的地址，（这个不是野指针，就是赋值空指针，什么都不指向，啥都没有）
	SListPushBack(&plist, 1);//尾插       插入一些数据，插入几个节点（值）；1，2，3，4这几个值用底层节点存储起来
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//想在1的前面插入一个10
	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsert(&plist, pos, 10);
	}
	SListPrint(plist);
	//想在3的前面插入一个30     想在某个值前面插入，就先找到这个值，找到了，就把它作为参数传给SListInsert(&plist, pos, 30)里面的pos位置
	pos = SListFind(plist, 3);
	if (pos)//pos不等于NULL，说明找到了3，就把30插在3的前面，pos等于NULL，表示没有找到
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);

}


int main()
{
	TestSList3();

	return 0;
}