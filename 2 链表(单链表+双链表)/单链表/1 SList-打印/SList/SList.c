#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SListPrint(SLTNode* phead)//��ӡ����
{
	SLTNode* cur = phead;//��phead��ֵ����ǰλ��cur
	while (cur != NULL)//�����ڿ�ָ����������ڿ�ָ��NULL����
	{
		printf("%d", cur->data);//��ӡcurָ�������data
		cur = cur->next;//����һ����ַcur->next��ֵ��cur,��֤cur�ĵ�ַ��������
	}
}