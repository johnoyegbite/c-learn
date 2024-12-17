#include <stdio.h>
#include <strings.h>


struct location {
	char* description;
	float latitude;
	float longitude;
} home_location = {"UNILAG", 6.5158, 3.3898},
  curr_location = {"CURR", 46.5158, 53.3898}; // initialize two struct "home_location" and "curr_location".


struct location foo(char *req)
{
	struct location loc;
	if(!strcmp(req, "home"))
	{
		loc = home_location;
	}
	else
	{
		loc = curr_location;
	}
	return loc;
}

int main(void)
{
	char *req = "home";
	
	struct location my_college = foo(req);

	printf("Come visit %s at geo: %f, %f\n",
		my_college.description,
		my_college.latitude,
		my_college.longitude);

	return(0);
}
