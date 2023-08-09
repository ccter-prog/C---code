#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


//打印乘法口诀表
int main()
{
	int i = 0;	//列
	int j = 0;	//行
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	short flang = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flang * 1.0 / i;
//		flang = -flang;	//此时flang为-1，再下来之后负负得正
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%10==9||i/10==9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		//if (i % 10 == 9)
//		//{
//		//	count++;
//		//	printf("%d ", i);
//		//}
//		//if (i / 10 == 9)
//		//{
//		//	count++;
//		//	printf("%d ", i);
//		//}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
////int main()
////{
////	int a = 0,b = 0;
////	for (a = 1, b = 1; a <= 100; a++)
////	{
////		if (b >= 20)
////		{
////			break;
////		}
////		if (b % 3 == 1)
////		{
////			b += 3;
////			continue;
////		}
////		b -= 5;
////	}
////	printf("%d\n", a);
////	return 0;
////}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	//{
//	//	//—— 试除法 ——
//	//	//int j = 0;
//	//	//for (j = 2; j < i; j++)
//	//	//{
//	//	//	if (i % j == 0)
//	//	//	{
//	//	//		break;
//	//	//	}
//	//	//}
//	//	//if (j == i)
//	//	//{
//	//	//	count++;
//	//	//	printf("素数为：%d\n", i);
//	//	//}
//
//	//	//—— 优化 ——
//	//	//int j = 0;
//	//	//for (j = 2;j <= sqrt(i); j++)
//	//	//{
//	//	//	if (i % j == 0)
//	//	//	{
//	//	//		break;
//	//	//	}
//	//	//}
//	//	//if (j > sqrt(i))
//	//	//{
//	//	//	count++;
//	//	//	printf("素数有：%d\n", i);
//	//	//}
//
//	//	
//	//}
//
//	//—— 再优化 ——
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("素数有：%d\n", i);
//		}
//	}
//	printf("总共有%d个素数\n", count);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//—— 第一种方法 ——
//		//if (year % 4 == 0 && year%100!=0)
//		//{
//		//	printf("闰年为：%d\n", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("闰年为：%d\n", year);
//		//	count++;
//		//}
//
//		//—— 第二种方法 ——
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("闰年为：%d\n", year);
//			count++;
//		}
//	}
//	printf("\n闰年总共有：%d\n", count);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入需要求取最大公约数的数\n");
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为：%d\n", n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}