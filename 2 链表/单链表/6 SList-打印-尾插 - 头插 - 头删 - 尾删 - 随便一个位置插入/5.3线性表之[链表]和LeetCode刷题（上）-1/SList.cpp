#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListPrint(SLTNode* phead)//��ӡ����
{
	SLTNode* cur = phead;//��phead��ֵ����ǰλ��cur
	while (cur != NULL)//�����ڿ�ָ����������ڿ�ָ��NULL����
	{
		printf("%d->", cur->data);//��ӡcurָ�������data
		cur = cur->next;//����һ����ַcur->next��ֵ��cur,��֤cur�ĵ�ַ��������
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)//��̬����һ���ڵ�ռ�
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));//Ҫβ��һ���ڵ㣬��Ҫmalloc��̬����һ���ڵ�ռ������
	newnode->data = x;//��Ҫβ���x�ŵ�������Ľڵ�newnode��dataλ�ô�
	newnode->next = NULL;//��������Ľڵ�newnode��nextλ�ô�ָ���ָ��NULL

	return newnode;
}


void SListPushBack(SLTNode** pphead, SLTDataType x)//β��   �����ڲ���֮ǰ���нڵ��β���û�нڵ��β���ǲ�ͬ�������
                                                            //��Ҫ�ֿ����ۣ����������������Ϊ�պ�����Ϊ��
{
	SLTNode* newnode = BuySListNode(x);//���ú���BuySListNode������һ���ڵ�

	//��β�˲���һ���ڵ㣬�ж�phead�ǲ���Ϊ��ָ��NULL
	if (*pphead == NULL)//����Ϊ�յ������������Ϊ�գ�û��һ���ڵ㣬�Լ�malloc������һ���ڵ�newnodeֱ�Ӹ�ֵ��phead���У�  ����Ϊ�յ����  
	{
		*pphead = newnode;
	}
	else//������һ���ڵ㣬����������һ���ڵ������        ����Ϊ�յ����
	{
		//��β�ڵ��ָ��
		SLTNode* tail = *pphead;//��ΪҪβ�壬����Ҫ����β�ڵ��ָ��tail����head��ֵ��tail
		while (tail->next != NULL)//Ҫ�ҵ�β���ж�tail->next�ǲ��ǿ�ָ��NULL��
		{
			tail = tail->next;//����һ����ַtail->next��ֵ��tail
		}
		//β�ڵ㣬�����½ڵ㣨�ҵ�Ϊ�ڵ�ĵ�ַ��
		tail->next = newnode;//�Ѵ������µĽڵ�newnode�ĵ�ַ���浽β�ڵ�tail->nextλ�ô�
	}
}


void SListPushFront(SLTNode** pphead, SLTDataType x)//ͷ��   �����ڲ���֮ǰ���нڵ��ͷ���û�нڵ��ͷ����һ������������÷ֿ�����
{
	SLTNode* newnode = BuySListNode(x);//���ú���BuySListNode������һ���ڵ�

	newnode->next = *pphead;//�ѵ�һ���ڵ�ĵ�ַphead��ֵ��������Ľڵ�newnode��next
	*pphead = newnode;//phead����洢������Ľڵ�newnode�ĵ�ַ
}


void SListPopFront(SLTNode** pphead)//ͷɾ
{
	//ɾ����һ���ڵ�֮ǰ��Ҫ�ѵڶ����ڵ�ĵ�ַ��������
	SLTNode* next = (*pphead)->next;//*pphead����plist,Ҳ���ǵ�һ���ڵ㣬(*pphead)->next�ǵ�һ���ڵ��next����ָ��ڶ����ڵ㣬������ǵڶ����ڵ�ĵ�ַ
	free(*pphead);//*pphead����plist,Ҳ���ǵ�һ���ڵ㣬����ڶ����ڵ���ͷŵ�һ���ڵ�
	*pphead = next;//�ѵڶ����ڵ�ĵ�ַ��ֵ��*pphead(��Ϊɾ���˵�һ���ڵ㣬���Դ�ʱ��Ҫ�ѵڶ����ڵ㵱����һ���ڵ�������)

}


void SListPopBack(SLTNode** pphead)//βɾ
{
	//1 ����Ϊ�գ�����Ҫɾ
	if (*pphead == NULL)
	{
		return;
	}
	//2 ֻ��1���ڵ�,ֱ��free������ڵ㣬�ڰ�*pphead��ΪNULL
	else if ((*pphead)->next==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}

	//3 ��һ�����ϵĽڵ�
	else
	{
		SLTNode* prev = NULL;//��������prev�����浹���ڶ����ڵ��next,��βɾ���֮�󣬰�����ΪNULL����prev->next = NULL
		SLTNode* tail = *pphead;//��������tail�������ҵ����һ���ڵ�
		while (tail->next != NULL)//�ж�tail��next�ǲ��ǿ�ָ�룬���ǿ�ָ�룬����whileѭ������Ĳ���������ǿ�ָ�룬˵���Ѿ��ҵ����һ���ڵ�
		{
			prev = tail;
			tail = tail->next;
		}
		//��������˵���Ѿ��ҵ����һ���ڵ㣬��ʱ��tailָ��������һ���ڵ㣬prevָ����ǵ����ڶ����ڵ�
		free(tail);//βɾ���һ���ڵ㣨�ͷ����һ���ڵ㣩
		prev->next = NULL;//�����ڶ����ڵ��next,��βɾ���֮�󣬰�����ΪNULL����prev->next = NULL
	}
}


SLTNode* SListFind(SLTNode* phead, SLTDataType x)//����     ���Ҵ�һ��ָ��Ϳ��ԣ����Ҳ���ı�ͷָ��
{
	SLTNode* cur = phead;//��ͷָ�븳ֵ����ǰλ��cur
	while (cur)//��ǰλ��cur�����ڿ�ָ��ʱ������ѭ��  ������Ҳ����дΪwhile(cur!=NULL)
	{
		if (cur->data == x)//��ǰλ��curָ������ݵ���xʱ���ͷ��ص�ǰλ��
		{
			return cur;//�ҵ��ˣ�����cur
		}
		cur = cur->next;//��ǰ��cur->data������x,����һ��λ�ô��ĵ�ַcur->next��ֵ��cur���ٴν��бȽϣ������Ȳ�����x
	}
	//�����ߵ�����˵��û���ҵ�һ�����ݵ���x
	return NULL;

}
//��pos��ǰ�����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)//���һ��λ�ò���
{
	if (pos == *pphead)//��������൱��ͷ�壬�ֽڵ���ͷ��ĳ������
	{
		SListPushFront(pphead, x);
	}
	else//������������൱��ͷ������
	{
		SLTNode* newnode = BuySListNode(x);//���ú���BuySListNode������һ���ڵ�

		SLTNode* prev = *pphead;//��ͷָ��*pphead��ֵ��prev
		while (prev->next != pos)//prevָ���next������pos�ͼ���������pos�ͽ�����
		{
			prev = prev->next;//����һ��prevָ���next��ֵ��prev������ִ��while����
		}
		//�����ߵ�����˵��prev��next����pos,�����ҵ���pos
		prev->next = newnode;//��ʱposǰ��һ����prev��prevָ���next�洢����������Ľڵ�newnode�ĵ�ַ
		newnode->next = pos;//�½ڵ�newnode��next�洢����pos�ĵ�ַ
	}
}


//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** phead, SLTNode* pos);//���һ��λ��ɾ��