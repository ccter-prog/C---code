#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>

int main()
{
	char arr1[] = "Welcome to my code!!";
	char arr2[] = "####################";
	int lift = 0;
	int right = strlen(arr1) - 1;
	while (lift <= right)
	{
		arr2[lift] = arr1[lift];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);	//停顿一下
		system("cls");	//清空屏幕
		lift++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}

//int main()
//{
//	char password[20];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，程序退出\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int lift = 0;	//左下标
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;	//右下标
//	int mid = 0;	//平均值下标
//	while (lift<=right)
//	{
//		mid = (lift + right) / 2;
//		if (arr[mid] > k) 
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			lift = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (lift > right)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 19;
//	int i = 0;
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是：%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("没找到\n");
//		}
//	}
//	return 0;
// }

//int main()
//{
//	int a = 0;
//	int i = 1;
//	while (i)
//	{
//		printf("请选择通道：\n");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			printf("正在连接通道1\n");
//			break;
//		case 2:
//			printf("正在连接通道2\n");
//			break;
//		case 3:
//			printf("正在连接通道3\n");
//			break;
//		case 4:
//			printf("正在连接通道4\n");
//			break;
//		case 5:
//			printf("正在连接通道5\n");
//			break;
//		default:
//			printf("无效通道，请重新选择\n");
//			continue;
//		}
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int num = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		num = num + ret;
//	}
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int num = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			
//			ret = ret * i;
//		}
//		num = num + ret;
//	}
//	
//	printf("num = %d\n", num);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("hehe\n");
//	}
//		return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe %d\n",j);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (;; )
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}