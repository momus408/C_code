#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���С�ɻ�
//int main()
//{
//	printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");
//	return 0;
//}


//���ѧ����Ϣ
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}

//������Ϣ ����ֻ����� ����Ļ�������Ϣ���ߴ��
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}

//������ʽ��ֵ 
// �����(-8+22)*a-10+c/2 ���� a=40, c=212 
//�������֮��Ľ����Ϊһ������
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int x = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", x);
//	return 0;
//}

//�����������Ľϴ�ֵ
//����10 20 ����ϴ�ֵ20
//int MAX(int x, int y)		//��������ϴ�ֵ����
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);	//�����������Ľϴ�ֵ
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//����Y��ֵ
//��֪һ������y=f(x),��x<0ʱ��y=1����x=0ʱ��y=0����x>0ʱ��y=-1
//���룺һ�У�����һ������x	(-10000<x<10000)
//�����һ�У����y��ֵ

int main()
{	int x = 0;
	int y = 0;
	//����
	scanf("%d", &x);	 //��һ��д��scanf("%d\n", &x) ���������е����������
	//����
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else 
		y = 1;
	//���
	printf("%d\n", y);
	return 0;
}

