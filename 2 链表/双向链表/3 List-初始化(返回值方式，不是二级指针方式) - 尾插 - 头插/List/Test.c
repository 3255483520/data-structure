#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void TestList1()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);//β��
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListPushFront(plist, 0);//ͷ��
	ListPushFront(plist, -1);
	ListPrint(plist);

	
	ListDestory(plist);
}

int main()
{
	TestList1();

	return 0;
}
