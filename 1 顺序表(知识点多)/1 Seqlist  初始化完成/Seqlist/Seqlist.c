#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps)//˳���ĳ�ʼ��
{
	memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);
	ps->size = 0;
}