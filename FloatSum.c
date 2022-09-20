/* Program in C to add two floating numbers */

#include <stdio.h>
int main()
{
	float a, b, c;
	
	printf("Enter any two numbers ");
	scanf("%f%f", &a, &b);
	
	c = a + b;
	
	printf("The sum of %f and %f is %f", a, b, c);
	return 0;
	
}
