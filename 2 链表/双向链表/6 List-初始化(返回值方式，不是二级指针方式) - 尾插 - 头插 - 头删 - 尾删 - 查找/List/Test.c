#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void TestList1()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);//尾插
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListPushFront(plist, 0);//头插
	ListPushFront(plist, -1);
	ListPrint(plist);

	ListPopFront(plist);//头删
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

	ListPopBack(plist);//尾删
	ListPrint(plist);
	
	ListDestory(plist);
}



void TestList2()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);//尾插
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListNode* pos = ListFind(plist, 3);
	if (pos)//如果pos不等于空指针，就说明找到了
	{
		printf("找到了\n");
	}
	else//pos等于空指针，就说明没有找到
	{
		printf("没有找到\n");
	}

	ListPrint(plist);

}


int main()
{
	TestList2();

	return 0;
}
