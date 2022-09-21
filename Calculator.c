/* Program in C to make a simple calculator */

#include <stdio.h>
int main()
{
	char oper;
	float x,y;
	printf("Enter the operator ");
	scanf("%c",&oper);
	printf("Enter the operands ");
	scanf("%f %f", &x, &y);
	switch(oper)
	{
		case '+':
			printf("The sum is = %f", x+y);
			break;
		case '-':
			printf("The difference is = %f", x-y);
			break;
		case '*':
			printf("The multiple is = %f", x*y);
			break;
		case '/':
			printf("The quotient is = %f", x/y);
			break;
		default:
			printf("invalid operator");													
	}
	return 0;
}
