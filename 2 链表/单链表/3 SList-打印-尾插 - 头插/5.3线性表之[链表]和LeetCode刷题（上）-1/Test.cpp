#define _CRT_SECURE_NO_WARNINGS 1
//SList:Signal List������
#include "SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;//��Ҫһ��ָ��plist�����洢��һ���ڵ�ĵ�ַ�����������Ұָ�룬���Ǹ�ֵ��ָ�룬ʲô����ָ��ɶ��û�У�
	SListPushBack(&plist, 1);//β��       ����һЩ���ݣ����뼸���ڵ㣨ֵ����1��2��3��4�⼸��ֵ�õײ�ڵ�洢����
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPushFront(&plist, 0);//ͷ��
	SListPrint(plist);


}

int main()
{
	TestSList1();

	return 0;
}