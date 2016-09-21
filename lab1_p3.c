#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float operand1;//note all the numbers stored as floats (this is so the division will work and so that we can work with decimal numbers)
	float operand2;
	float result;
	char operator;//the operand is a character so we can make direct comparison statements (could have also used an integer and a conversion specifier)

	printf("operand 1:\n");//this gets the user inputs in a very specific order, operand 1, operator, and operand 2
	fflush(stdout);//fflush statements are here to ensure all of the print statements execute correctly
	scanf("%f",&operand1);
	printf("enter the operator\n");
	fflush(stdout);//note that we are not error checking the format entered until we hit the switch statement
	scanf("%c",&operator);
	scanf("%c",&operator);//needed a second scanf because of hitting the enter key caused a problem in the program.
	printf("enter the second operand\n");
	fflush(stdout);
	scanf("%f",&operand2);
	if(operator == '/' && operand2 == 0)//special case of dividing by zero (needed to be added after my first demo, mentioned in lab report)
	{
			printf("you cannot divide by zero!\n");
			return 1;//exits the program if you try to divide by zero 
	}
	switch(operator)
	{
	case '+'://going through each case, note that if none of the 4 operators match the user input, it provides an error message and the program terminates
		result = operand1 + operand2;//addition 
		printf("%f + %f = %f\n",operand1,operand2,result);//same format for each printout
		break;
	case '-':
		result = operand1 - operand2;//subtraction 
		printf("%f - %f = %f\n",operand1,operand2,result);
		break;
	case '*':
		result = operand1 * operand2;//multiplication
		printf("%f * %f = %f\n",operand1,operand2,result);
		break;
	case '/':
		result = operand1 / operand2;//division
		printf("%f / %f = %f",operand1,operand2,result);
		break;
	default:
			printf("error error error\n");//should none of the operators match the user input
			break;
	}
	return 1;

}

