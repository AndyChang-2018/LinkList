#ifndef LINKLIST_H
#define LINKLIST_H

#include<stdio.h>
#include<stdlib.h>

//�ڵ㶨��
typedef struct node
{
	int data;
	struct node *pNext;
} node;

typedef struct node LinkList;


//�����½ڵ� 
int Create_node(LinkList **s);


//��ʼ������
//int Init_LinkList();
int Init_LinkList(LinkList **s);

//��ʼ��һ������
int Init_LinkList_all(LinkList **s);

//����ڵ㡪��β��
//LinkList *Insert_Node_Tail(LinkList *p_list, int data);
int Insert_Node_Tail(LinkList **p_list, int data);


//����ڵ㡪��ǰ��
//LinkList *Insert_Node_Head(LinkList *p_list, int data);
int Insert_Node_Head(LinkList **p_list, int data);

//����ڵ㡪���ڵ�sdataǰ����
//LinkList *Insert_Node(LinkList *p_list, int s_data, int data);
int Insert_Node(LinkList **p_list, int s_data, int data);

//��ʾ��������
int Show_LinkList(LinkList *p_list);

//��ʾ��������
int Show_LinkList_rev(LinkList *p_list);

//�����������Ƿ���data
//LinkList *Search_Data_LinkList(LinkList *p_list, int s_data);
int Search_Data_LinkList(LinkList *p_list, LinkList **pData, int s_data);

//���������е�i���ڵ��data
int Search_I_Data(LinkList *p_list, int i, int *data);

//�޸�
int Modify_Data(LinkList *p_list, int s_data, int data);

//ɾ���ڵ�
//LinkList *Delete_Node(LinkList *p_list, int data);
int Delete_Node(LinkList **p_list, int s_data);

//ɾ����������
int Delete_linklist(LinkList *p_list);











#endif