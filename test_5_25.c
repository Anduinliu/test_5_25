 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		int c = getchar();
//		if ('#' == c)
//		{
//			//break;//����ѭ��
//			continue;//��������(һ�Σ�ѭ��
//		}
//		putchar(c);
//	}
//	printf("\nbreak out!\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		printf("continue before:%d\n", i);
//		if (i == 5)
//		{
//			printf("continue\n");
//			continue;//continue ��ת���������´�
//		}
//		printf("continue after\n");
//	}
//
//	return 0;
//}
//while/do while ѭ�� continue ��ת�������ж���

//goto�ؼ���
//int main()
//{
//	goto end;
//	printf("hello 1\n");
//	printf("hello 2\n");
//	printf("hello 3\n");
//end:
//	printf("hello 4\n");
//	printf("hello 5\n");
//	printf("hello 6\n");
//	return 0;
//}

//gotoֻ���ڴ������ʹ��
//
//int main()
//{
//	int i = 0;
//start:
//	printf("[%d] goto running ...\n");
//	i++;
//	if (i < 10)
//	{
//		goto start;
//	}
//	printf("goto end ...\n");
//}

//void �ؼ���
//void ����ͱ�����������Ϊ�����ͣ�ǿ�ƵĲ����������
//int main()
//{
//	printf("%d\n", sizeof(void));//vs�����´�СΪ0
//	return 0;
//}

//C�����к������Բ�������ֵ,Ĭ�ϵķ���ֵ�� int
//void ���κ�������ֵ 
//1.ռλ�������û�����ȷ����Ҫ����ֵ
//2.��֪���������������ֵ�޷�����
//3.void �䵱�������β��б���֪�û�or���������ú�������Ҫ����
//test()
//{
//	printf("hello test\n");
//	
//	return 1;
//}
//int main()
//{
//	int a = test();
//	printf("%d\n", a);
//
//	return 0;
//}
//int test()
//{
//	return 1;
//}
//int test2(void)
//{
//	return 1;
//}
//int main()
//{
//	test(1, 2, 3, 4);
//	return 0;
//}
//
//void* ���Ա��κ����͵�ָ�����
//void* ���Խ�����������ָ������

int main()
{
	void* p = NULL;

	return 0;
}