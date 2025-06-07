#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//%d - 打印整形
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据

//转义字符
	// \n 换行  
	// \0 字符串的结束标志 
	// \? 防止多个问号同时使用， 防止被解析成三字母词 ??) --> ]      ??( --> [
	// \" 用于表示一个字符串内部的双引号
	// \' 用于表示字符常量 
	// \\ 用于表示一个反斜杠
	// \a 警告字符
	// \b 退格符
	// \f 进纸符
	// \n 换行
	// \r 回车
	// \t 水平制表符
	// \v 垂直制表符
	// \ddd ddd表示1-3个八进制数字 比如\130 --> X
	// \xdd dd表示2个十六进制数字，比如\x30 --> 0
	
//注释	快捷键Ctrl K + Ctrl C 取消 Ctrl K + Ctrl U
	//1.注释可以梳理思路
	//2.对复杂的代码进行解释 
	//3.写代码的时候写注释既可以帮助自己又可以帮助别人
	
////选择语句
//	//if else
//	//switch 
//
////int main()
////{
////	int input = 0;
////	printf("加入比特\n");
////	printf("要好好学习吗(1/0)？");
////	scanf("%d", &input);
////
////	if (input == 1)
////	{
////		printf("好offer\n");
////	}
////	else
////	{
////		printf("回家卖红薯\n");
////	}
////	return 0;
////}

//循环语句 while if else 
//两万行有效代码的积累
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("好offer\n");
//	}
//	else 
//	{
//		printf("继续加油\n");
//	}
//
//	return 0;
//} 

//定义函数：求两个任意整数和
//int add(int x,int y)	//定义函数add(x,y)为x+y
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int n1;
//	int n2;
//	scanf("%d %d", &n1, &n2);	//输入
//	int sum = add(n1, n2);	//求和
//	printf("%d\n", sum);
//	return 0;
//}

//数组 
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };	//定义一个整形数组，数组的方括号表示最多放多少个元素
//	char ch[];
//	double db();
//	//0~9
//	//printf("%d\n", arr[0]);	//数组的方括号表示下标，0表示第一个数，9表示第十个数
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//
int main()
{

	return 0;
}