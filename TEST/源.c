#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//void clear()
//{
//	while (getchar() != ' ')
//		;
//}

int start(int* end,int input1,int* i)//ֻ�ܽ���ͬ��������߸߼��������ǰ������//���������������
{
	int input2 = 0;
	int mid = 0;
	(*i)++;
	mid = getchar();
	
	//clear();
	
	//clear();
	switch (mid)
	{
	case '+':
		scanf("%d", &input2);
		mid = input1 + input2;
		*end = start(end, mid, i);
		return *end;
	case '-':
		scanf("%d", &input2);
		mid = input1 - input2;
		*end = start(end, mid, i);
		return *end;
	case '*':
		scanf("%d", &input2);
		mid = input1 * input2;
		*end = start(end, mid, i);
		return *end;
	case '/':
		scanf("%d", &input2);
		mid = input1 / input2;
		*end = start(end, mid, i);
		return *end;
	//case '(':

	//case ')':

	default :
		return input1;
	}
}

int main()
{
	int end = 0;
	int input1 = 0;
	int i = 0;
	printf("���빫ʽ��");
	scanf("%d", &input1);
	printf("%d",start(&end,input1,&i));
	return 0;
}



