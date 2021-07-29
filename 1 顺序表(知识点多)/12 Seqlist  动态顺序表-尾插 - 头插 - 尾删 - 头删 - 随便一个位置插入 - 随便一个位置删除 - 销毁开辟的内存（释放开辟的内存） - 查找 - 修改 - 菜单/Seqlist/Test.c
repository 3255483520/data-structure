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


void menu()
{
	printf("******************************************\n");
	printf("1. 尾插数据    2.头插数据\n");
	printf("3. 尾删数据    4.头删数据\n");
	printf("5. 打印数据   -1.退出\n");
	printf("******************************************\n");
	printf("请输入你的操作选项：");

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
			printf("请输入你要插入的数据，以-1结束\n");
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