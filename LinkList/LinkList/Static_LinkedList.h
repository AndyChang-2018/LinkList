#ifndef _STATIC_LINKEDLIST_
#define _STATIC_LINKEDLIST_

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 1000;

//�ṹ�嶨��
typedef struct 
{
	int data;
	int curr;

}StaticLinkedList;

//��ʼ��һ����̬����
int Init_StaticLinklist(StaticLinkedList **stalinlst, StaticLinkedList *array, int num);

//����һ��Ԫ��
int Inster_StaticLinkList(StaticLinkedList *array, int i_data);




#endif