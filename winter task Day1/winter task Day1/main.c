#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 1.
/*
int main()
{
	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, *q[4], k;
	for (k = 0; k < 4; k++)
	{
		q[k] = &a[k * 3];
	}
	printf("%d\n",q[3][1]);//22
	return 0;
}

*/


// 2.
/*
int main()
{
	int i, j, a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)  // 0%2==0
				break;
			a++;
		}
		a++;
	}
	printf("%d\n",a);//4
}

*/


// 3.
// �궨��ĺ�չ������Ԥ����׶���ɵ�


// 4.
//char a; int b; float c; double d;
//����ʽ  a*b+d-c ��ֵ�������� double ����


// 5.
//����ȷ��ʾ�߼���ϵ����a>=10��a<=10����c���Ա��ʽ
// a>=10||a<=10


// 6.
// test.c�ļ��а���������䣺
#define INT_PTR int*
typedef int* int_ptr;
int main()
{
	int num = 10;
	INT_PTR a = &num, b = &num;
	int_ptr c = &num, d = &num;
	printf("%p\n",a);
	printf("%p\n",b);
	printf("%p\n",c);
	printf("%p\n",d);
	return 0;
}


