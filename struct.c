#include <stdio.h>


struct location {
	char* description;
	float latitude;
	float longitude;
};

int main(void)
{
	struct location my_college = {"UNILAG", 6.5158, 3.3898};

	printf("Come visit %s at geo: %f, %f\n",
		my_college.description,
		my_college.latitude,
		my_college.longitude);

	return(0);
}
