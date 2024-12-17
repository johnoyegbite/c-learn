include <stdio.h>

void swap(int *i, int *j);

int main(void)
{
	int i = 1, j = 2;
	
	printf("i=%d, j=%d\n", i, j);
	
	swap(&i, &j);

	printf("i=%d, j=%d\n", i, j);
	
	return(0);
}

void swap(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}
