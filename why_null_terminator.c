#include <stdio.h>


int main(int argc, char* argv[])
{
	char c = 'x';
	char hello[5] = {'h', 'e', 'l', 'l', 'o'};
	char bye[] = {"bye"};

	printf("%s\n", hello);  // hellobye
	printf("%s\n", c);     // xhellobye
	
	return(0);
}
