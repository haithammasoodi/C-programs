/* Program in C to find the factorial of an integer using functions*/
#include <stdio.h>
int fact(int);
int main ()
{
	int x, z;
	printf("Enter the integer  ");
	scanf("%d", &x);
	z = fact(x);
	printf("The factorial is = %d",z);
}

int fact(int x)
{
	int z, f=1;
	for (z=1;z<=x;z++)
	{
		f = f*z;
	}
	return (f);
}
