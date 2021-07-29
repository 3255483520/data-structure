#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);//����ַ

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
	SeqListInit(&s1);//����ַ

	SeqListPushFront(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 6);
	SeqListPrint(&s1);

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);//βɾ3��
	SeqListPrint(&s1);

	SeqListPopFront(&s1);//ͷɾ1��
	SeqListPrint(&s1);

}



void TestSeqList3()
{
	SL s1;
	SeqListInit(&s1);//����ַ

	SeqListPushFront(&s1, 1);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 6);
	SeqListPrint(&s1);

	SeqListInsert(&s1,1,20);//��5��ǰ�����20
	SeqListPrint(&s1);

	SeqListErase(&s1, 1);//��20ɾ��
	SeqListPrint(&s1);

	SeqListDestory(&s1);//���ٿ��ٵ��ڴ棨�ͷſ��ٵ��ڴ棩
}


void menu()
{
	printf("******************************************\n");
	printf("1. β������    2.ͷ������\n");
	printf("3. βɾ����    4.ͷɾ����\n");
	printf("5. ��ӡ����   -1.�˳�\n");
	printf("******************************************\n");
	printf("��������Ĳ���ѡ�");

}

int main()
{
	SL s;
	SeqListInit(&s);

	int option = 0;
	int x = 0;
	while (option != -1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("��������Ҫ��������ݣ���-1����\n");
			do{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			SeqListPrint(&s);
			break;
		default:
			break;
		}
	}

	SeqListDestory(&s);

	return 0;
}