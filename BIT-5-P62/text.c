#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//BIT - 5 - ��̬�ڴ����
//  malloc --- void* malloc (size_t size); 
//  free  ---  void free (void* ptr);
//int main()
//{
//	//int* p = malloc(10 * sizeof(int));
//	int* p = malloc(INT_MAX);//��������ֽ�
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//�������ٿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;//�ڿռ���д������
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//��ӡ�ռ��е�����
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	//ͬʱ������ַ
//	p = NULL;
//	//����һ��ʹ�ã�˭���٣�˭�ͷ�
//	return 0;
//}

int main()
{
	//����1
	int num = 0;
	scanf("%d", &num);
	//int arr[num] = { 0 };//err --- ��Ҫ����
	//����2
	int* ptr = NULL;
	ptr = (int*)malloc(num * sizeof(int));
	if (NULL != ptr)//�ж�ptrָ���Ƿ�Ϊ��
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);//�ͷ�ptr��ָ��Ķ�̬�ڴ�
	ptr = NULL;//�б�Ҫ
	return 0;
}