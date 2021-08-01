#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void TestList1()
{
	ListNode* plist = ListInit();
	
	ListDestory(plist);
}

int main()
{
	TestList1();

	return 0;
}
