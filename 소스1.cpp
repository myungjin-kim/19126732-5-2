#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double b = 2.204623;

	printf("����(kg)�Է�: ");
	scanf("%lf", &a);

	printf("%.3f�Ŀ��", a * b);
}