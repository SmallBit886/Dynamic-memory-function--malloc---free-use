#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//BIT - 5 - 动态内存管理
//  malloc --- void* malloc (size_t size); 
//  free  ---  void free (void* ptr);
//int main()
//{
//	//int* p = malloc(10 * sizeof(int));
//	int* p = malloc(INT_MAX);//开辟最大字节
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常开辟空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;//在空间中写入数据
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//打印空间中的数据
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	//同时消除地址
//	p = NULL;
//	//两者一起使用；谁开辟；谁释放
//	return 0;
//}

int main()
{
	//代码1
	int num = 0;
	scanf("%d", &num);
	//int arr[num] = { 0 };//err --- 需要常量
	//代码2
	int* ptr = NULL;
	ptr = (int*)malloc(num * sizeof(int));
	if (NULL != ptr)//判断ptr指针是否为空
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);//释放ptr所指向的动态内存
	ptr = NULL;//有必要
	return 0;
}