#include <stdio.h>


typedef struct foo {
	int i;
	char a;
	double d;
} Foo;

typedef union fudge {
	int i; 
	char a;
	double d;
} Fudge;


int main(void)
{
	Foo wow;
	Fudge foodge;

	printf("Size of Foo is %lu\n", sizeof(wow));
	printf("Size of Fudge is %lu\n", sizeof(foodge));

	return(0);
}
