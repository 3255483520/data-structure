#define _CRT_SECURE_NO_WARNINGS 1

//顺序表实现
//	2.1概念及结构
//		顺序表是用一段物理地址连续的存储单元依次存储数据元素的线性结构，一般情况下采用数组存储。在数组上完成数据的增删查改。
//顺序表一般可以分为：
//		1. 静态顺序表：使用定长数组存储。
//		2. 动态顺序表：使用动态开辟的数组存储。
//	// 顺序表的静态存储
//	#define N 100
//	typedef int SLDataType;
//	typedef struct SeqList
//	{
//		SLDataType array[N]; // 定长数组
//		size_t size; // 有效数据的个数
//	}SeqList;
//
//  // 顺序表的动态存储
// typedef struct SeqList
// {
//		SLDataType* array; // 指向动态开辟的数组
//		size_t size; // 有效数据个数
//		size_t capicity; // 容量空间的大小
//	}SeqList;
//
//	2.2 接口实现：
//静态顺序表只适用于确定知道需要存多少数据的场景。静态顺序表的定长数组导致N定大
//了，空间开多了浪费，开少了不够用。所以现实中基本都是使用动态顺序表，根据需要动态
//的分配空间大小，所以下面我们实现动态顺序表。



#pragma once

#include <stdio.h>
#include <string.h>//memeset函数的头文件

//增强程序的可维护性
#define MAX_SIZE 500 
typedef int SQDataType;

//顺序表的静态存储
typedef struct SeqList
{
	SQDataType a[MAX_SIZE];//定长数组
	int size;//有效数据的个数
}SL;



//增删查改等接口函数
void SeqListInit(SL* ps);//顺序表的初始化(第一个接口函数一般都是初始化)