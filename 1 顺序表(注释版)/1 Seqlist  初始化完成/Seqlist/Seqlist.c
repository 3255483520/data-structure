#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps)//˳���ĳ�ʼ��
{
	memset(ps->a, 0, sizeof(SQDataType)*MAX_SIZE);//��ʼ������:SQDataType a[MAX_SIZE],memset�Ƕ��ֽڳ�ʼ����sizeof(SQDataType)*MAX_SIZE���ֽ�����
	                                              //0�ǰ������ÿһ��Ԫ�ض���ʼ��Ϊ0
	ps->size = 0;//һ��ʼ��������һ�����ݶ�û�У�����size��0
}