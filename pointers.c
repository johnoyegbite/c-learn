#include <stdio.h>

int main(void)
{
	int int1 = 65;
	char chr1 = 'A';
	
	char* str1 = "foo";
	const char str11[4] = "foo";

	char str2[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // '\0' is string terminator.
	char str3[4] = "bye"; // One extra for string terminator.
	char str4[6] = {"world"}; // One extra for string terminator.

	char* str5 = str2;
	char* str6 = &str2[3];	

	printf("int1: %d\n", int1);
	
	printf("chr1: %c\n", chr1);
	printf("chr1 int: %d\n", chr1);

	printf("str1: %s\n", str1);
	printf("str11: %s\n", str11);
	
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);

	printf("str5: %s\n", str5);
	printf("str6: %s\n", str6);
	return(0);
}
