#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print_arr(int* str,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(str+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr,sz);
//	return 0;
//}

////字符串逆序
//#include<string.h>
//void reverse_str(char* str, int len)
//{
//	int i = 0;
//	while((str + i) <= (str + len - i - 1))
//	{
//		char tmp = *(str+i);
//		*(str+i) = *(str + len - i - 1);
//		*(str + len - i - 1) = tmp;
//		i++;
//	}
//}
//int main()
//{
//	char arr[20] = "I am a student";
//	int len = strlen(arr);
//	reverse_str(arr,len);
//	printf("%s\n",arr);
//	return 0;
//}

////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//#include<math.h>
//int Sum_n(int a,int n)//得到a的n位循环数
//{
//	
//	if (n == 1)
//	{
//		return a;
//	}
//	else
//	{
//		return a * pow(10, n - 1) + Sum_n(a, n - 1);  
//	}
//}
//int Sn(int a,int i)
//{
//	int sum = 0;
//	while (i)
//	{
//		sum += Sum_n(a,i);//对a的循环数进行i次求和
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);//输入要循环的数
//	int ret = Sn(a,5);//对a的循环数进行5项求和
//	printf("Sn=%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,ret);
//	return 0;
//}

////求出0～100000之间的所有“水仙花数”并输出
//#include<math.h>
//int Narcis(int i)
//{
//	int j = 0;//循环变量
//	int sum = 0;
//	int count = 0;//i的位数
//	int arr[8] = { 0 };//用数组来存储i的每一位
//	for (j = i; j; j /= 10)
//	{
//		arr[count] = j % 10;
//		count++;
//	}
//	for (j = 0; j < count; j++)
//	{
//		sum += pow(arr[j], count);
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (Narcis(i) == 1)//判断是否为水仙花数的函数
//		{
//			printf("%d \n",i);
//		}
//	}
//	return 0;
//}

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 8; i++)//控制上半部分的行数
//	{
//		for (j = 7 - i; j > 0; j--)//打印每一行的空格
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)//打印每一行的*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)//控制下半部分的行数
//	{
//		for (j = 1; j <= i; j++)//打印每一行的空格
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (7 - i) - 1; j++)//打印每一行的*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

int main()
{
	int money = 20;
	int bottle = 0;
	while ((--money)>=0)//每用一块钱
	{
		if (money == 19)//一块钱一瓶
			bottle = 1;
		else
		{
			bottle += 2;//花了1块钱以上，每再花一块钱得两瓶
		}
	}
	printf("%d\n",bottle);
	return 0;
}

