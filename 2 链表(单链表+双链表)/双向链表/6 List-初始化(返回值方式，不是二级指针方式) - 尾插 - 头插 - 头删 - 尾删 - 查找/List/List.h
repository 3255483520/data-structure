#define _CRT_SECURE_NO_WARNINGS 1
//实际中链表的结构非常多样，以下情况组合起来就有8种链表结构
//	1. 单向、双向
//	2. 带头、不带头
//	3. 循环、非循环
//
//虽然有这么多的链表的结构，但是我们实际中最常用还是两种结构：
//	1. 无头单向非循环链表：结构简单，一般不会单独用来存数据。实际中更多是作为其他数据结构的子结构，如哈希桶、图的邻接表等等。
//	   另外这种结构在笔试面试中出现很多。
//	2. 带头双向循环链表：结构最复杂，一般用在单独存储数据。实际中使用的链表数据结构，都是带头双向循环链表。另外这个结构虽然
///    结构复杂，但是使用代码实现以后会发现结构会带来很多优势，实现反而简单了，后面我们代码实现了就知道了。

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode*prev;
	LTDataType data;
}ListNode;


ListNode* ListInit();//初始化
void ListDestory(ListNode* phead);//销毁
void ListPrint(ListNode* phead);//打印
void ListPushBack(ListNode* phead, LTDataType x);//尾插
void ListPushFront(ListNode* phead, LTDataType x);//头插
void ListPopFront(ListNode* phead);//头删
void ListPopBack(ListNode* phead);//尾删

ListNode* ListFind(ListNode* phead, LTDataType x);//查找
//在pos位置之前插入x
void ListInsert(ListNode* pos, LTDataType x);
//删除pos位置的值
void ListErase(ListNode* pos);