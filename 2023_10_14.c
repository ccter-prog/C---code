#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0; 
	sum = Add(a,b);
	printf("sum = %d", sum);
	return 0;
}

//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	//int len = 0;
//	char arr[] = "abc";
//	//len = strlen(arr);
//	printf("%d", strlen(arr));
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("num = %d", num);
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;	//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//		{
//			printf("闰年有：%d\n", year);
//		}
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	int j;
//	//2-n-1
//	//优化之前
//	//for (j = 2; j < n; j++)
//	//{
//	//	if (n % j == 0)
//	//	{
//	//		return 0;
//	//	}
//	//}
//	//return 1;
//
//	//优化之后
//	for (j = 2; j <= sqrt(n); j++)	//给n开平方
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//void Swap1(int x, int y)	//值传递
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//void Swap2(int* pa,int* pb)	//地址传递
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	//Swap1(a, b);
//	Swap2(&a,&b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	max = get_max(100, 500+100);
//	printf("%d\n", max);
//	max = get_max(100, get_max(1000, 2000));
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "****************";
//	strcpy(arr2, arr1);	//第一个是目的地，第二个是被拷贝对象
//	printf("%s\n", arr2);
//	return 0;
//}

//int Add(int a, int b)
//{
//	int z = a + b;
//	return z;	//因为最终的返回值是一个整型，所以要在Add前面放整型的类型
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);	//Add后面括号里面就是输入参数
//	printf("%d\n", sum);
//	return 0;
//}