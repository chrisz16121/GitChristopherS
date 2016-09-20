
#include <stdio.h>
#include <stdlib.h>

#define pi	3.14

int main (void)
{
	float i;
	float j;
	float k;
	float areaofcircle;
	float circumference;
	printf("this is a test statement\n");
	printf("enter the radius of the circle to get the area\n");
	fflush(stdout);
	scanf("%f",&i);
	if(i <= 0)
	{
		printf("number cannot be negative\n");
		return 1;
	}
	else
	{
		j = i * i;
		areaofcircle = j * pi;
		printf("the area of the circle is: %f\n\n",areaofcircle);
		fflush(stdout);

		return 1;
	}
	
	return 1;
}
