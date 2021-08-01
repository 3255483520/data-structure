#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListPrint(SLTNode* phead)//打印函数
{
	SLTNode* cur = phead;//把phead赋值给当前位置cur
	while (cur != NULL)//不等于空指针继续，等于空指针NULL结束
	{
		printf("%d->", cur->data);//打印cur指向的数据data
		cur = cur->next;//把下一个地址cur->next赋值给cur,保证cur的地址逐渐往后走
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)//动态申请一个节点空间
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));//要尾插一个节点，需要malloc动态申请一个节点空间出来，
	newnode->data = x;//把要尾插的x放到新申请的节点newnode的data位置处
	newnode->next = NULL;//把新申请的节点newnode的next位置处指向空指针NULL

	return newnode;
}


void SListPushBack(SLTNode** pphead, SLTDataType x)//尾插   链表在插入之前：有节点的尾插和没有节点的尾插是不同的情况，
                                                            //需要分开讨论，分两种情况，链表为空和链表不为空
{
	SLTNode* newnode = BuySListNode(x);//调用函数BuySListNode，申请一个节点

	//在尾端插入一个节点，判断phead是不是为空指针NULL
	if (*pphead == NULL)//链表为空的链表（这个链表为空，没有一个节点，自己malloc出来的一个节点newnode直接赋值给phead就行）  链表为空的情况  
	{
		*pphead = newnode;
	}
	else//至少有一个节点，链表至少有一个节点的链表        链表不为空的情况
	{
		//找尾节点的指针
		SLTNode* tail = *pphead;//因为要尾插，所以要定义尾节点的指针tail，把head赋值给tail
		while (tail->next != NULL)//要找到尾，判断tail->next是不是空指针NULL，
		{
			tail = tail->next;//把下一个地址tail->next赋值给tail
		}
		//尾节点，链接新节点（找到为节点的地址）
		tail->next = newnode;//把创建的新的节点newnode的地址保存到尾节点tail->next位置处
	}
}


void SListPushFront(SLTNode** pphead, SLTDataType x)//头插   链表在插入之前：有节点的头插和没有节点的头插是一样的情况，不用分开讨论
{
	SLTNode* newnode = BuySListNode(x);//调用函数BuySListNode，申请一个节点

	newnode->next = *pphead;//把第一个节点的地址phead赋值给新申请的节点newnode的next
	*pphead = newnode;//phead里面存储新申请的节点newnode的地址
}


void SListPopFront(SLTNode** pphead)//头删
{
	//删除第一个节点之前，要把第二个节点的地址保存下来
	SLTNode* next = (*pphead)->next;//*pphead就是plist,也就是第一个节点，(*pphead)->next是第一个节点的next，它指向第二个节点，保存的是第二个节点的地址
	free(*pphead);//*pphead就是plist,也就是第一个节点，保存第二个节点后，释放第一个节点
	*pphead = next;//把第二个节点的地址赋值给*pphead(因为删除了第一个节点，所以此时需要把第二个节点当做第一个节点来看待)

}


void SListPopBack(SLTNode** pphead)//尾删
{
	//1 链表为空，不需要删
	if (*pphead == NULL)
	{
		return;
	}
	//2 只有1个节点,直接free掉这个节点，在把*pphead置为NULL
	else if ((*pphead)->next==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}

	//3 有一个以上的节点
	else
	{
		SLTNode* prev = NULL;//创建变量prev来保存倒数第二个节点的next,在尾删完成之后，把它置为NULL，即prev->next = NULL
		SLTNode* tail = *pphead;//创建变量tail，用来找到最后一个节点
		while (tail->next != NULL)//判断tail的next是不是空指针，不是空指针，进行while循环里面的操作，如果是空指针，说明已经找到最后一个节点
		{
			prev = tail;
			tail = tail->next;
		}
		//程序到这里说明已经找到最后一个节点，此时，tail指向的是最后一个节点，prev指向的是倒数第二个节点
		free(tail);//尾删最后一个节点（释放最后一个节点）
		prev->next = NULL;//倒数第二个节点的next,在尾删完成之后，把它置为NULL，即prev->next = NULL
	}
}


SLTNode* SListFind(SLTNode* phead, SLTDataType x)//查找     查找传一级指针就可以，查找不会改变头指针
{
	SLTNode* cur = phead;//把头指针赋值给当前位置cur
	while (cur)//当前位置cur不等于空指针时，进入循环  这句代码也可以写为while(cur!=NULL)
	{
		if (cur->data == x)//当前位置cur指向的数据等于x时，就返回当前位置
		{
			return cur;//找到了，返回cur
		}
		cur = cur->next;//当前的cur->data不等于x,把下一个位置处的地址cur->next赋值给cur，再次进行比较，看看等不等于x
	}
	//程序走到这里说明没有找到一个数据等于x
	return NULL;

}
//在pos的前面插入x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)//随便一个位置插入
{
	if (pos == *pphead)//这种情况相当于头插，字节调用头插的程序就行
	{
		SListPushFront(pphead, x);
	}
	else//这种情况不是相当于头插的情况
	{
		SLTNode* newnode = BuySListNode(x);//调用函数BuySListNode，申请一个节点

		SLTNode* prev = *pphead;//把头指针*pphead赋值给prev
		while (prev->next != pos)//prev指向的next不等于pos就继续，等于pos就结束，
		{
			prev = prev->next;//把下一个prev指向的next赋值给prev，继续执行while程序
		}
		//程序走到这里说明prev的next等于pos,就是找到了pos
		prev->next = newnode;//此时pos前面一个是prev，prev指向的next存储的是新申请的节点newnode的地址
		newnode->next = pos;//新节点newnode的next存储的是pos的地址
	}
}


//删除pos位置的值
void SListErase(SLTNode** phead, SLTNode* pos);//随便一个位置删除