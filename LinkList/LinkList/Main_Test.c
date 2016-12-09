#include<stdio.h>
#include<stdlib.h>
#include"LinkList.h"
#include<time.h>

int main()
{
	clock_t start, stop;
	double duration;
	int ret = 0;
	LinkList *linklist = NULL;
	start = clock();
	ret = Create_node(&linklist);     //�����ڵ�
	ret = Init_LinkList(&linklist);   //��ʼ������

	ret = Show_LinkList(linklist);
	printf("\n");

	LinkList *p_list = NULL;
	ret = Insert_Node_Tail(&linklist, 3);
	
	ret = Insert_Node_Tail(&linklist, 5);
	ret = Insert_Node_Tail(&linklist, 8);
	ret = Insert_Node_Tail(&linklist, 10);
	ret = Insert_Node_Tail(&linklist, 15);
	ret = Show_LinkList(linklist);
	//printf("\n");
	//printf("********************************");
	//ret = Delete_linklist(linklist);
	//ret = Show_LinkList(linklist);
	//printf("\n");
	//printf("********************************");


	ret = Insert_Node_Head(&linklist, 20);
	ret = Show_LinkList(linklist);
	printf("\n");

	ret = Insert_Node(&linklist, 15, 13);

	ret = Show_LinkList(linklist);

	
	LinkList *pData = NULL;
	ret = Search_Data_LinkList(linklist, &pData , 10);
	printf("����Ϊ10�Ľڵ��ַ�ǣ�%p \n", pData);

	
	int data = 0;
	ret = Search_I_Data(linklist, 3, &data);
	printf("%d \n ", data);

	
	ret = Modify_Data(linklist, 8, 13);

	ret = Show_LinkList(linklist);
	printf("\n");

	ret = Modify_Data(linklist, 13, 44);

	ret = Show_LinkList(linklist);
	printf("\n");


	ret = Delete_Node(&linklist, 44);

	ret = Show_LinkList(linklist);
	printf("\n");

	ret = Delete_linklist(linklist);

	stop = clock();

	duration = ((double)(stop - start))/CLK_TCK;

	printf("%f\n", duration);
	
 	system("pause");

	return 0;
}