#include<stdio.h>
#include<stdlib.h>
#include"Static_LinkedList.h"


//��ʼ��һ����̬����
int Init_StaticLinklist(StaticLinkedList **stalinlst, StaticLinkedList *array, int num)
{
	if (array == NULL)
	{
		printf("����Ϊ�գ��붨�����飡");
		return -1;
	}
	StaticLinkedList *stalin = NULL;
	stalin = array;

	stalin[0].data = 0;

	for (int i = 0; i < num -1; i++)
	{
		stalin[i].curr = i + 1;
	}

	stalin[num - 1].curr = 0;
	stalin[num - 1].data = 0;

	*stalinlst = stalin;

	return 0;
}

//����һ��Ԫ��
int Inster_StaticLinkList(StaticLinkedList *stalinlst, int i_data)
{
	if (stalinlst == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}



	return 0;
}
