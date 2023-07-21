#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Output(int num)
{
	int a = num%10;
	if (num > 9)
	{
		a = num %10;
		//printf("%d ", a);//µπ–Ú¥Ú”°
		Output(num/10);
	}
	printf("%d ", a);
	
	return 0;
}