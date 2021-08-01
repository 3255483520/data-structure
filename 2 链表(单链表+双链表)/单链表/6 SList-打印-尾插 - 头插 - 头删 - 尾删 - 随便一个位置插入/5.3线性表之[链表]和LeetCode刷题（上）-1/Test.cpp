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

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);//ͷɾ��ɾ��3��
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);//ͷɾ��ɾ��5��


}



void TestSList2()
{
	SLTNode* plist = NULL;//��Ҫһ��ָ��plist�����洢��һ���ڵ�ĵ�ַ�����������Ұָ�룬���Ǹ�ֵ��ָ�룬ʲô����ָ��ɶ��û�У�
	SListPushBack(&plist, 1);//β��       ����һЩ���ݣ����뼸���ڵ㣨ֵ����1��2��3��4�⼸��ֵ�õײ�ڵ�洢����
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPopBack(&plist);//βɾ
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

}


void TestSList3()
{
	SLTNode* plist = NULL;//��Ҫһ��ָ��plist�����洢��һ���ڵ�ĵ�ַ�����������Ұָ�룬���Ǹ�ֵ��ָ�룬ʲô����ָ��ɶ��û�У�
	SListPushBack(&plist, 1);//β��       ����һЩ���ݣ����뼸���ڵ㣨ֵ����1��2��3��4�⼸��ֵ�õײ�ڵ�洢����
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//����1��ǰ�����һ��10
	SLTNode* pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsert(&plist, pos, 10);
	}
	SListPrint(plist);
	//����3��ǰ�����һ��30     ����ĳ��ֵǰ����룬�����ҵ����ֵ���ҵ��ˣ��Ͱ�����Ϊ��������SListInsert(&plist, pos, 30)�����posλ��
	pos = SListFind(plist, 3);
	if (pos)//pos������NULL��˵���ҵ���3���Ͱ�30����3��ǰ�棬pos����NULL����ʾû���ҵ�
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