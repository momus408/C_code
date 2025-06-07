#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 输出小飞机
//int main()
//{
//	printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");
//	return 0;
//}


//输出学生信息
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}

//发布信息 你的手机丢了 在屏幕上输出信息告诉大家
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}

//计算表达式的值 
// 请计算(-8+22)*a-10+c/2 其中 a=40, c=212 
//输出计算之后的结果，为一个整数
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int x = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", x);
//	return 0;
//}

//求两个整数的较大值
//输入10 20 输出较大值20
//int MAX(int x, int y)		//构建输出较大值函数
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);	//求两个整数的较大值
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//计算Y的值
//已知一个函数y=f(x),当x<0时，y=1；当x=0时，y=0；当x>0时，y=-1
//输入：一行，输入一个整数x	(-10000<x<10000)
//输出：一行，输出y的值

int main()
{	int x = 0;
	int y = 0;
	//输入
	scanf("%d", &x);	 //第一次写的scanf("%d\n", &x) 代码能运行但是输出不了
	//计算
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else 
		y = 1;
	//输出
	printf("%d\n", y);
	return 0;
}

