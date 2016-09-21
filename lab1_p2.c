
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float cost;//all need to be floats just in case we are dealing with decimal amounts 
	float sell;
	float net;

	printf("what was the cost?\n");//getting the user inputs and using fflush() after each print statement to make sure the buffer is cleared
	fflush(stdout);
	scanf("%f",&cost);
	printf("how much did you sell it for?");//more user input and another fflush
	fflush(stdout);
	scanf("%f",&sell);
	if(cost < sell)//series of if else statements to deduce if it was a net gain, loss, or no net result
	{
			net = sell - cost;//profit if they sold it for more than they bought it
			printf("you made a profit of %f dollars!\n",net);
			return 1;//note that the program terminates in each case of the if else statements.
	}
	else if(sell < cost)
	{
			net = cost - sell;//loss if they sold it for less than what they bought it
			printf("you lost %f dollars!\n",net);
			return 1;
	}
	else if(cost == sell)
	{
		printf("there was no net loss or gain\n");//in case they sold it for the same amount that the bought it
		return 1;//i had to come back in and add this later (mentioned in the lab report)
	}
	else
	{
		printf("something went wrong here\n");//this should never execute, i added it for troubleshooting
	}
	return 0;
}
