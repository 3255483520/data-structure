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

	ListPopFront(plist);//ͷɾ
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

	ListPopBack(plist);//βɾ
	ListPrint(plist);
	
	ListDestory(plist);
}



void TestList2()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);//β��
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListNode* pos = ListFind(plist, 3);
	if (pos)//���pos�����ڿ�ָ�룬��˵���ҵ���
	{
		//���ң��������޸�����
		pos->data *= 10;//pos�ҵ�������ڵ㣬pos->data���ҵ���������ݣ�pos->data *= 10���Ƕ�������ݽ��г�10����
		printf("�ҵ��ˣ����ҽڵ��ֵ����10\n");
	}
	else//pos���ڿ�ָ�룬��˵��û���ҵ�
	{
		printf("û���ҵ�\n");
	}

	ListPrint(plist);

}


int main()
{
	TestList2();

	return 0;
}
