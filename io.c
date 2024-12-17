#include <stdio.h>

int main(void)
{
	char f, m, l; // first, middle, last.
	int age;

	printf("Enter your initials and age: ");
	
	scanf("%c %c %c %d", &f, &m, &l, &age);

	printf("My initial are: %c%c%c and my age is %d.\n", f, m, l, age);

	return(0);
}
