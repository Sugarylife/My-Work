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

////�ַ�������
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

////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//#include<math.h>
//int Sum_n(int a,int n)//�õ�a��nλѭ����
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
//		sum += Sum_n(a,i);//��a��ѭ��������i�����
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);//����Ҫѭ������
//	int ret = Sn(a,5);//��a��ѭ��������5�����
//	printf("Sn=%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,ret);
//	return 0;
//}

////���0��100000֮������С�ˮ�ɻ����������
//#include<math.h>
//int Narcis(int i)
//{
//	int j = 0;//ѭ������
//	int sum = 0;
//	int count = 0;//i��λ��
//	int arr[8] = { 0 };//���������洢i��ÿһλ
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
//		if (Narcis(i) == 1)//�ж��Ƿ�Ϊˮ�ɻ����ĺ���
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
//	for (i = 1; i < 8; i++)//�����ϰ벿�ֵ�����
//	{
//		for (j = 7 - i; j > 0; j--)//��ӡÿһ�еĿո�
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)//��ӡÿһ�е�*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)//�����°벿�ֵ�����
//	{
//		for (j = 1; j <= i; j++)//��ӡÿһ�еĿո�
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (7 - i) - 1; j++)//��ӡÿһ�е�*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ

int main()
{
	int money = 20;
	int bottle = 0;
	while ((--money)>=0)//ÿ��һ��Ǯ
	{
		if (money == 19)//һ��Ǯһƿ
			bottle = 1;
		else
		{
			bottle += 2;//����1��Ǯ���ϣ�ÿ�ٻ�һ��Ǯ����ƿ
		}
	}
	printf("%d\n",bottle);
	return 0;
}

