#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c1 = 31, c2 = 30, c3 = 29, c4 = 28;
	printf("���������a���·�b\n");
	scanf("a=%d,b=%d", &a, &b);
	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
	{
		printf("���µ�����Ϊ");
		printf("%d\n", c1);
	}
	else if (b == 4 || b == 6 || b == 9 || b == 11)
	{
		printf("���µ�����Ϊ");
		printf("%d\n", c2);
	}
	else if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	{
		printf("���µ�����Ϊ");
		printf("%d\n", c3);
	}
	else
	{
		printf("���µ�����Ϊ");
		printf("%d\n", c4);
	}
	system("pause");
	return 0;
}