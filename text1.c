#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b,c;
	puts("��������������");
	printf("����������1"); scanf("%d", &a);
	printf("����������2"); scanf("%d", &b);
	printf("����������3"); scanf("%d", &c);
	if (a == b && b == c)
		printf("���������");
	if (a == b && a != c || a == c && a != b || b == c && b != a)
		printf("���������");
	if (a != b && a != c && b != c)
		printf("�������������");
	return 0;
}