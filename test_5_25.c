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
//			//break;//跳出循环
//			continue;//结束本次(一次）循环
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
//			continue;//continue 跳转到条件更新处
//		}
//		printf("continue after\n");
//	}
//
//	return 0;
//}
//while/do while 循环 continue 跳转到条件判定处

//goto关键字
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

//goto只能在代码块内使用
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

//void 关键字
//void 本身就被编译器解释为空类型，强制的不允许定义变量
//int main()
//{
//	printf("%d\n", sizeof(void));//vs环境下大小为0
//	return 0;
//}

//C语言中函数可以不带返回值,默认的返回值是 int
//void 修饰函数返回值 
//1.占位符：让用户能明确不需要返回值
//2.告知编译器，这个返回值无法接收
//3.void 充当函数的形参列表：告知用户or编译器，该函数不需要传参
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
//void* 可以被任何类型的指针接受
//void* 可以接受任意类型指针类型

int main()
{
	void* p = NULL;

	return 0;
}