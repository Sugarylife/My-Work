#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//int fun(int n, int k)
//{
//	if (k ==1)
//	{
//		return n;
//	}
//	return n * fun(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d",&n,&k);
//	int ret = fun(n, k);
//	printf("%d\n",ret);
//	return 0;
//}

//int  Add_by_unit(int n)
//{
//	if (n != 0)
//	{
//		return n % 10 + Add_by_unit(n / 10);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Add_by_unit(n);
//	printf("%d\n",ret);
//	return 0;
//}

#include<windows.h>
void reverse_string(char* string)
{
	if (*(string + 1) != '\0')
	{
		reverse_string(string + 1);
	}
	printf("%c", *string);
}
int main()
{
	char arr[] = "";
	scanf("%s",arr);
	reverse_string(arr);
	system("pause");
	return 0;
}