#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));//����һ���µĽڵ�newnode
	newnode->data = x;//newnodeָ���data��ֵx
	newnode->next = NULL;//newnodeָ���next��ֵ��ָ��NULL
	newnode->prev = NULL;//newnodeָ���prev��ֵ��ָ��NULL

	return newnode;
}


ListNode* ListInit()//��ʼ��
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;//phead��nextҪָ���Լ�phead
	phead->prev = phead;//phead��prevҪָ���Լ�phead

	return phead;
}

void ListDestory(ListNode* phead)//����
{
	assert(phead);

	ListNode* cur = phead->next;//��ǰcur��phead��next����Ϊ�� ��ͷ˫��ѭ������ �У�ͷphead�ǲ��洢���ݵ�
	while (cur != phead)//cur����phead������������phead����
	{
		ListNode* next = cur->next;//free��cur֮ǰ��Ҫ����cur����һ����ַ����һ����ַ����Ϊnext
		free(cur);

		cur = next;//free(cur)����cur���ٰ���һ����ַnext��ֵ��cur
	}

	free(phead);//���е�����֮��ҲҪfree��ͷ�ڵ�phead
	phead = NULL;

}

void ListPrint(ListNode* phead)//��ӡ
{
	ListNode* cur = phead->next;//��ǰcur��phead��next����Ϊ�� ��ͷ˫��ѭ������ �У�ͷphead�ǲ��洢���ݵ�
	while (cur != phead)//cur����phead������������phead����
	{
		printf("%d ",cur->data);//��ӡcurָ���data
		cur = cur->next;//��cur��next��ֵ��cur
	}
	printf("\n");
}

void ListPushBack(ListNode* phead, LTDataType x)//β��           ����Ϊ��ָ��NULL�Ͳ�Ϊ��ָ��NULL������
{
	assert(phead);//����

	//ListNode* tail = phead->prev;//�ҵ����һ���ڵ㣨tail�������һ���ڵ㣩
	//ListNode* newnode = BuyListNode(x);//����һ���µĽڵ�

	//tail->next = newnode;//���һ���ڵ�tail��nextָ���µĽڵ�newnode                �ⲿ����β��ľ���
	//newnode->prev = tail;//�µĽڵ�newnode��prevָ�����һ���ڵ�tail
	//newnode->next = phead;//�µĽڵ�newnode��nextָ��ͷphead
	//phead->prev = newnode;//phead��prevָ���µĽڵ�newnode

	ListInsert(phead, x);//��pheadǰ�����x(������൱��β��x)

}


void ListPushFront(ListNode* phead, LTDataType x)//ͷ��
{
	assert(phead);

	//ListNode* first = phead->next;//��head����ָ��Ľڵ㶨��Ϊ��һ���ڵ�first
	//ListNode* newnode = BuyListNode(x);//����һ���µĽڵ�

	////phead newnode first ��3���ڵ�����ӹ�ϵ
	//phead->next = newnode;//phead��nextָ���½ڵ�newnode
	//newnode->prev = phead;//newnode��prevָ��ͷphead
	//newnode->next = first;//newnode��nextָ��ڵ�first
	//first->prev = newnode;//first��prevָ���½ڵ�newnode


	ListInsert(phead->next,x);//��phead�ĺ������x,Ҳ������phead����һ������ǰ�����x

}


void ListPopFront(ListNode* phead)//ͷɾ
{
	assert(phead);
	//assert(phead->next != phead);//���phead��next����phead��˵����������һ���ڵ㶼û���ˣ��Ͳ���Ҫɾ���ˣ�������Ҫ�ж�һ�£�û����仰��
	//                             //����Ϊ��ʱ��phead=first=second�����ͷpheadҲɾ����������free(first)Ҳ���ͷphead�ͷţ����������⣬
	//                             //���ܰ�ͷpheadҲ�ͷŵ�
	//                             
	//ListNode* first = phead->next;//��head����ָ��Ľڵ㶨��Ϊ��һ���ڵ�first
	//ListNode* second = first->next;//�ѵ�һ���ڵ�first����ָ��Ľڵ㶨��Ϊ�ڶ����ڵ�second
	//phead->next = second;//phead��nextָ��ڶ����ڵ�second
	//second->prev = phead;//�ڶ����ڵ��prevָ��ͷphead


	//free(first);//�ͷŵ���һ���ڵ�first
	//first = NULL;//��һ���ڵ���Ϊ��ָ��NULL

	ListErase(phead->next);

}


void ListPopBack(ListNode* phead)//βɾ
{
	assert(phead);
	//assert(phead->next != phead);//���phead��next����phead��˵����������һ���ڵ㶼û���ˣ��Ͳ���Ҫɾ���ˣ�������Ҫ�ж�һ�£�û����仰��
	////����Ϊ��ʱ��phead=prev=tail�����ͷpheadҲɾ����������free(tail)Ҳ���ͷphead�ͷţ����������⣬
	////���ܰ�ͷpheadҲ�ͷŵ�

	//ListNode* tail = phead->prev;//phead��prevָ��������һ���ڵ㣬tail����Ϊ���һ���ڵ�
	//ListNode* prev = tail->prev;//���һ���ڵ�tail��prevָ�����ڶ����ڵ�prev��prev����Ϊ�����ڶ����ڵ�
	// 
	////ɾ�����һ���ڵ�tail��
	//prev->next = phead;//�����ڶ����ڵ�prev��nextָ��ͷphead
	//phead->prev = prev;//phead��prevָ�����ڶ����ڵ�prev

	//free(tail);//�ͷŵ����һ���ڵ�tail
	//tail = NULL;//���һ���ڵ���Ϊ��ָ��NULL


	ListErase(phead->prev);

}


ListNode* ListFind(ListNode* phead, LTDataType x)//����
{
	assert(phead);

	ListNode* cur = phead->next;//��phead��next������ǰλ��cur��phead��nextҲ����ǰ��˵�ĵ�һ���ڵ�first��
	while (cur != phead)//cur ������pheadʱ��������whileѭ��   �����whileѭ�����ڱ���������������ܲ����ҵ�x��
	{
		if (cur->data == x)//cur��data����x������cur
		{
			return cur;//�ҵ��ˣ���������ڵ��ָ��cur
		}
		cur = cur->next;//��cur��next��ֵ��cur����������whileѭ��
	}
	//�����ߵ������˵��û���ҵ������ؿ�ָ��
	return NULL;
}



//��pos֮ǰ����x
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);//Ҫ����Ļ���pos����Ϊ��ָ��

	ListNode* prev = pos->prev;//�ҵ���λ����pos��posǰ���һ���ڵ㶨��Ϊprev��posָ���prev����posǰ��Ľڵ�prev
	ListNode* newnode = BuyListNode(x);//����һ���µĽڵ�

	//prev  newnode pos  ��3���ڵ�����ӹ�ϵ
	prev->next = newnode;// prev(��posǰ����Ǹ��ڵ�)��nextָ���µĽڵ�newnode
	newnode->prev = prev;//�µĽڵ�newnode��prev((���prev����posǰ����Ǹ��ڵ�))ָ��prev(���prev��posǰ����Ǹ��ڵ�)
	newnode->next = pos;//newnode��nextָ���ҵ���λ��pos
	pos->prev = newnode;//pos��prevָ���½ڵ�newnode

}

//ɾ��posλ�õ�ֵ
void ListErase(ListNode* pos)
{
	assert(pos);//Ҫɾ�Ļ���pos����Ϊ��ָ��

	ListNode* prev = pos->prev;//�ҵ���λ����pos��posǰ���һ���ڵ㶨��Ϊprev��posָ���prev����posǰ��Ľڵ�prev
	ListNode* next = pos->next;//�ҵ���λ����pos��pos�����һ���ڵ㶨��Ϊnext��posָ���next����pos����Ľڵ�next
	
	//ɾ����posλ�õĽڵ��
	prev->next = next;//�ڵ�prev��next�����next���ǽڵ㣩ָ��ڵ�next�����next�ǽڵ㣬pos������Ǹ��ڵ㣩
	next->prev = prev;//�ڵ�next��prev�����prev���ǽڵ㣩ָ��ڵ�prev�����prev�ǽڵ㣬posǰ����Ǹ��ڵ㣩

	free(pos);//�ͷŵ�posλ�õĽڵ�

}