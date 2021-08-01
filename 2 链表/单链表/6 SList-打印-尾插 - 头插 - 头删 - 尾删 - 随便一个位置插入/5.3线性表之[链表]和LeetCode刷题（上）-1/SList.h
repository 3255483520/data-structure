#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

//动态顺序表
//    1 插入数据，空间不够了，要增容
//    2 要求数据是依次存储的
//动态顺序表缺陷
//    1 如果空间不够，增容。增容会付出一定性能消耗，其次可能存在一定的空间浪费
//    2 头部或者中部左右的插入删除效率低--时间复杂度O（N）

//如何解决？
//  1 空间上，按需给空间
//  2 不要求物理空间连续，头部和中间的插入，就不需要挪动数据

 

#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;//重新定义int类型为SLTDataType   这样写可以方便存储其他类型的数据
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};
typedef struct SListNode SLTNode;//重新定义struct SListNode为SLTNode

//不会改变链表的头指针，传一级指针
void SListPrint(SLTNode* phead);//先打印一下，打印这个链表


//可能会改变链表的头指针，传二级指针
void SListPushBack(SLTNode** pphead, SLTDataType x);//尾插  插入的位置是头指针pphead（第一个节点的地址），插入的数据x是SLTDataType（int）类型
void SListPushFront(SLTNode** pphead, SLTDataType x);//头插
void SListPopFront(SLTNode** pphead);//头删
void SListPopBack(SLTNode** pphead);//尾删

SLTNode* SListFind(SLTNode* phead, SLTDataType x);//查找     查找传一级指针就可以，查找不会改变头指针
//在pos的前面插入x
void SListInsert(SLTNode** phead,SLTNode* pos, SLTDataType x);//随便一个位置插入
//删除pos位置的值
void SListErase(SLTNode** phead, SLTNode* pos);//随便一个位置删除