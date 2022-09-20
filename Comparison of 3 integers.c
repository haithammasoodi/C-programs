
/* Program in C to compare three integers */

#include <stdio.h>
int main()
{
	int x, y, z;
	
	printf("Enter three integers ");
	scanf("%d %d %d", &x, &y, &z);
	
	if(x==y && x>z)
	{
		printf("%d and %d are greatest and equal", x, y);
	}
	else if(x==y && x<z)
	{
		printf("%d is greatest and %d and %d are equal", z, x, y);
	}
	else if(x==z && x>y)
	{
		printf("%d and %d are greatest and equal", z, x);
	}
	else if(x==z && x<y)
	{
		printf("%d is greatest and %d and %d are equal", y, x, z);
	}
	else if(z==y && z>x)
	{
		printf("%d and %d are greatest and equal", z, y);
	}
	else if(z==y && z<x)
	{
		printf("%d is greatest and %d and %d are equal", x, z, y);
	}
	else if(x>y && x>z)
	{
		printf("%d is greatest", x);
	}
	else if(y>z && y>x)
	{
		printf("%d is greatest", y);
	}
	else if(z>y && z>x)
	{
		printf("%d is greatest", z);
	}
	else
	{
		printf("All are equal");
	}
	return 0;
}
