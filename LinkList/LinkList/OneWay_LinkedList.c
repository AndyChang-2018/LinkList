#include<stdio.h>
#include<stdlib.h>
#include"OneWay_LinkedList.h"


//�����½ڵ�
int Create_node(LinkedList **s)
{
	*s = (LinkedList *)malloc(sizeof(LinkedList));
	
	(*s)->data = 0;
	(*s)->pNext = NULL;
	
	return 0;
}

//��ʼ������
int Init_LinkedList(LinkedList **s)
{
	*s = (LinkedList *)malloc(sizeof(LinkedList));

	(*s)->data = 0;
	(*s)->pNext = NULL;

 	return 0;
}

//����ڵ㡪��β��
int Insert_Node_Tail(LinkedList **p_list, int data)
{
	if (*p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}

	LinkedList *s = *p_list;

	//����������β��
	while (s->pNext != NULL)
	{
		s = s->pNext;
	}

	//�����½ڵ�
	LinkedList *Tail_Node = NULL;
	int ret = Create_node(&Tail_Node);

	//��ֵ�½ڵ�
	Tail_Node->data = data;
	Tail_Node->pNext = NULL;

	//β�������½ڵ㣡
	s->pNext = Tail_Node;

	return 0;
}


//����ڵ㡪��ǰ��
int Insert_Node_Head(LinkedList **p_list, int data)
{
	if (*p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}

	LinkedList *s = *p_list;

	//�����½ڵ�
	LinkedList *Tail_Node = NULL;
	int ret = Create_node(&Tail_Node);

	Tail_Node->data = data;

	//ͷ�ڵ������½ڵ㣡
	Tail_Node->pNext = s->pNext;
	s->pNext = Tail_Node;

	return 0;
}

//����ڵ㡪���ڵ�s_dataǰ����
int Insert_Node(LinkedList **p_list, int s_data, int data)
{
	if (*p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}

	//������������ָ����������ֱ�ָ�������ڵ�
	LinkedList *p1, *p2;
	p1 = *p_list;            //ָ��ͷ�ڵ�
	p2 = (*p_list)->pNext;   //ָ�򶼽ڵ����Ľڵ�

	//���ң���ѭ���ƶ���������ָ��λ�ã�
	while (p2->data != s_data)
	{
		p1 = p1->pNext;
		p2 = p2->pNext;
	}
	
	//�����½ڵ�
	LinkedList *Tail_Node = NULL;
	int ret = Create_node(&Tail_Node);

	Tail_Node->data = data;
	
	//�����½ڵ� ��
	Tail_Node->pNext = p2;
	p1->pNext = Tail_Node;


	return 0;
}

//��ʾ��������
int Show_LinkedList(LinkedList *p_list)
{
	if (p_list != NULL)
	{
		printf("%d , %p , %p \n", p_list->data, p_list, p_list->pNext); //���ڵݹ����棬���������ӡ
		Show_LinkedList(p_list->pNext);
	}

	return 0;
}

//��ʾ��������
int Show_LinkedList_rev(LinkedList *p_list)
{
	if (p_list != NULL)
	{
		Show_LinkedList(p_list->pNext);
		printf("%d , %p , %p \n", p_list->data, p_list, p_list->pNext);

	}

	return 0;


}

//�����������Ƿ���data
int Search_Data_LinkedList(LinkedList *p_list, LinkedList **pData , int s_data)
{
	if (p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}
	int flag = 0;
	LinkedList *s = p_list;

	while (s)
	{
		if (s->data == s_data) //�ж��Ƿ���ȣ�������ҵ�������ѭ��
		{
			flag = 1;
			break;
		}
		s = s->pNext;
	}

	*pData = s;

	if (!flag)
	{
		printf("û���ҵ�ֵΪ��%d �Ľڵ㣡\n", s_data);
	}

	return 0;
}

//���������е�i���ڵ��data
int Search_I_Data(LinkedList *p_list, int i, int *data)
{
	if (p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}

	LinkedList *ptemp = p_list->pNext;

	//ѭ���ҵ�i��һ��λ�õĵ�ַ��
	for (int j = 1; j < i; j++)
	{
		if (ptemp->pNext == NULL)
		{
			printf("û�е�%d��λ�õĽڵ㣡\n",i);
			return -1;
		}
		ptemp = ptemp->pNext;
	}

	*data = ptemp->data;

	return 0;
}

//���ҵ�����i���ڵ��data
int Search_I_Data_Rev(LinkedList *p_list, int i, int *data)
{
	LinkedList *first = p_list;         //ǰ��һ��ָ��  
	int cnt = 0;

	while ( cnt++ < i )
	{             //��ǰ�ƶ�kλ  
		if (!first)
		{
			fprintf(stderr, "������С��I��\n");
			return -1;
		}
		else
			first = first->pNext;
	}

	LinkedList *index = p_list;              //��һ��ָ�룬��ʱfirst��index�������kλ  
	while ( first )
	{                   //��first������ĩβʱindex������Ҫ���ֵ  
		first = first->pNext;
		index = index->pNext;
	}

	*data = index->data;

	return 0;
}

//�޸Ľڵ��Data
int Modify_Data(LinkedList *p_list, int s_data, int data)
{
	int flag = 0;
	if (p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}
	 
	LinkedList *s = p_list;
	while (s)
	{
		if (s->data == s_data) //�ж��Ƿ���ȣ�������޸�ֵ
		{
			flag = 1;
			s->data = data;
		}
		s = s->pNext;
	}
	if (!flag)
	{
		printf("û���ҵ�ֵΪ��%d �Ľڵ㣡\n", s_data);
	}

	return 0;
}

//ɾ���ڵ�
int Delete_Node(LinkedList **p_list, int s_data)
{
	if (*p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}

	int flag = 0;
	//������������ָ����������ֱ�ָ�������ڵ�
	LinkedList *p1, *p2;
	p1 = *p_list;            //ָ��ͷ�ڵ�
	p2 = (*p_list)->pNext;   //ָ�򶼽ڵ����Ľڵ�

	//ѭ����������
	while (p2->pNext != NULL)
	{
		//�ж���������û����ͬ��
		if (p2->data == s_data)
		{
			flag = 1;
			p1->pNext = p2->pNext; //��������ɾ��ָ���ڵ�
			free(p2);              //�ͷű�ɾ���ڵ��ڴ�
		}
		p1 = p1->pNext;
		if (p1->pNext == NULL)
		{
			break;
		}
		p2 = p1->pNext;
	}
	if (!flag)
	{
		printf("û���ҵ�ֵΪ��%d �Ľڵ㣡\n", s_data);
	}

	return 0;
}

//ɾ����������
int Delete_LinkedList(LinkedList *p_list)
{
	if (p_list == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}

	LinkedList *p1, *p2;
	p1 = p_list->pNext;

	while (p1)
	{
		p2 = p1->pNext;
		free(p1);
		//p1->pNext = NULL;  //һ��ʼ������仰��������Ϊ���ͷŽڵ��е�ָ�����ÿգ�������仰���³���free(p1)��ʱ����ֱ���������û������Ϊɶ�����p1ָ��Ҳ��Ϊ�յ�ѽ
		p1 = p2;
	}

	p_list->pNext = NULL;



	return 0;
}
