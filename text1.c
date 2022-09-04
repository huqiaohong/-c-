#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b,c;
	puts("请输入三个整数");
	printf("请输入整数1"); scanf("%d", &a);
	printf("请输入整数2"); scanf("%d", &b);
	printf("请输入整数3"); scanf("%d", &c);
	if (a == b && b == c)
		printf("三个数相等");
	if (a == b && a != c || a == c && a != b || b == c && b != a)
		printf("两个数相等");
	if (a != b && a != c && b != c)
		printf("三个数都不相等");
	return 0;
}