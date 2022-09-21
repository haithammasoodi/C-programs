/* Program in C to find the division of two integers using functions*/
#include <stdio.h>
float div(float, float);
int main ()
{
	int x, y;
	float z;
	printf("Enter two integers  ");
	scanf("%d%d", &x, &y);
	z = div(x,y);
	printf("The division is = %f",z);
}

float div(float x, float y)
{
	float z;
	z = x/y;
	return (z);
}
