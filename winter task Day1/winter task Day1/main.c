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
// 宏定义的宏展开是在预处理阶段完成的


// 4.
//char a; int b; float c; double d;
//则表达式  a*b+d-c 的值的类型是 double 类型


// 5.
//能正确表示逻辑关系：“a>=10或a<=10”的c语言表达式
// a>=10||a<=10


// 6.
// test.c文件中包括如下语句：
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


