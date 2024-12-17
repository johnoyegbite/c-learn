#include <stdio.h>

int max(int num1, int num2);

int main(void)
{
	int a = 100;
	int b = 120;
	int ret;

	ret = max(a, b);

	printf("Max valud is : %d\n", ret);

	return(0);
}

int max(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	return num2;
}
