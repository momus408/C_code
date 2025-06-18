#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef -- 类型重命名(只针对类型)
//typedef unsigned int unit;		//将 unsigned int 简化为 unit 
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;		//unit和unsigned int的作用一样
//	
//	return 0;
//}

//static 
//1.修饰局部变量 -- 局部变量出作用域不销毁 改变了变量的存储位置
//2.修饰全局变量 -- 将全局变量的外部链接属性变为内部链接属性，其他源文件(.c文件)就不能再使用这个全局变量了(通过extern） 
//3.修饰函数 -- 将函数的外部链接属性变为内部链接属性，与修饰全局变量类似
// 
//修饰局部变量
//void test1()		//void在函数前表示函数不需要返回(return;)
//{
//	int a = 0;		//由于变量a在循环中一直重新定义，没有保留下来，每次循环都是0++也就是1
//	a++;
//	printf("%d", a);
//}
//
//void test2()
//{
//	static int b = 0;		//static修饰局部变量时，使变量的生命周期边长，和程序的生命周期一样
//	b++;
//	printf("%d", b);		//使变量b跳出作用域保留下来而没有销毁，在循环中一直++
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	while (x < 10)
//	{
//		test1();		//十个1
//		x++;
//	}
//	printf("\n");
//	while (y < 10)
//	{
//		test2();		//1到10
//		y++;
//	}
//	return 0;
//}

//#define 定义常量和宏
//#define NUM 100
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//	return 0;
//}
//#define定义宏
//宏是有参数
//
//#define ADD(x,y) ((x)+(y))		//#define 宏名(参数1，参数2） 宏体
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int c =ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

