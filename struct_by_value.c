#include <stdio.h>
#include <strings.h>


struct location {
	char* description;
	float latitude;
	float longitude;
};

void foo(struct location myloc)
{
	if((myloc.description != NULL) && !strcmp(myloc.description, "UNILAG"))
	{
		printf("Home sweet home!\n");
		// This won't change the latitude because myloc is passed by value.
		myloc.latitude = 0.0;
		myloc.longitude = 0.0;
	}
}


int main(void)
{
	struct location my_college = {"UNILAG", 6.5158, 3.3898};

	foo(my_college);

	printf("Come visit %s at geo: %f, %f\n",
		my_college.description,
		my_college.latitude,
		my_college.longitude);

	return(0);
}
