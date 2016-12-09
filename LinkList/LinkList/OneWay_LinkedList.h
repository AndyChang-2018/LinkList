#ifndef _ONEWAY_LINKEDLIST_
#define _ONEWAY_LINKEDLIST_

#include<stdio.h>
#include<stdlib.h>

//�ڵ㶨��
typedef struct node
{
	int data;
	struct node *pNext;
} node;

typedef struct node LinkedList;


//�����½ڵ� 
int Create_node(LinkedList **s);


//��ʼ������
//int Init_LinkedList();
int Init_LinkedList(LinkedList **s);

//��ʼ��һ������
int Init_LinkedList_all(LinkedList **s);

//����ڵ㡪��β��
//LinkedList *Insert_Node_Tail(LinkedList *p_list, int data);
int Insert_Node_Tail(LinkedList **p_list, int data);


//����ڵ㡪��ǰ��
//LinkedList *Insert_Node_Head(LinkedList *p_list, int data);
int Insert_Node_Head(LinkedList **p_list, int data);

//����ڵ㡪���ڵ�sdataǰ����
//LinkedList *Insert_Node(LinkedList *p_list, int s_data, int data);
int Insert_Node(LinkedList **p_list, int s_data, int data);

//��ʾ��������
int Show_LinkedList(LinkedList *p_list);

//��ʾ��������
int Show_LinkedList_rev(LinkedList *p_list);

//�����������Ƿ���data
//LinkedList *Search_Data_LinkedList(LinkedList *p_list, int s_data);
int Search_Data_LinkedList(LinkedList *p_list, LinkedList **pData, int s_data);

//���������е�i���ڵ��data
int Search_I_Data(LinkedList *p_list, int i, int *data);

//���ҵ�����i���ڵ��data
int Search_I_Data_Rev(LinkedList *p_list, int i, int *data);

//�޸�
int Modify_Data(LinkedList *p_list, int s_data, int data);

//ɾ���ڵ�
//LinkedList *Delete_Node(LinkedList *p_list, int data);
int Delete_Node(LinkedList **p_list, int s_data);

//ɾ����������
int Delete_LinkedList(LinkedList *p_list);


//��������ϲ�

//��������

//��������









#endif