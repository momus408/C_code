#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef -- ����������(ֻ�������)
//typedef unsigned int unit;		//�� unsigned int ��Ϊ unit 
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;		//unit��unsigned int������һ��
//	
//	return 0;
//}

//static 
//1.���ξֲ����� -- �ֲ����������������� �ı��˱����Ĵ洢λ��
//2.����ȫ�ֱ��� -- ��ȫ�ֱ������ⲿ�������Ա�Ϊ�ڲ��������ԣ�����Դ�ļ�(.c�ļ�)�Ͳ�����ʹ�����ȫ�ֱ�����(ͨ��extern�� 
//3.���κ��� -- ���������ⲿ�������Ա�Ϊ�ڲ��������ԣ�������ȫ�ֱ�������
// 
//���ξֲ�����
//void test1()		//void�ں���ǰ��ʾ��������Ҫ����(return;)
//{
//	int a = 0;		//���ڱ���a��ѭ����һֱ���¶��壬û�б���������ÿ��ѭ������0++Ҳ����1
//	a++;
//	printf("%d", a);
//}
//
//void test2()
//{
//	static int b = 0;		//static���ξֲ�����ʱ��ʹ�������������ڱ߳����ͳ������������һ��
//	b++;
//	printf("%d", b);		//ʹ����b������������������û�����٣���ѭ����һֱ++
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	while (x < 10)
//	{
//		test1();		//ʮ��1
//		x++;
//	}
//	printf("\n");
//	while (y < 10)
//	{
//		test2();		//1��10
//		y++;
//	}
//	return 0;
//}

//#define ���峣���ͺ�
//#define NUM 100
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//	return 0;
//}
//#define�����
//�����в���
//
//#define ADD(x,y) ((x)+(y))		//#define ����(����1������2�� ����
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

