/* Program in C to compare three distinct integers */

#include <stdio.h>
int main()
{
	int x, y, z;
	
	printf("Enter three integers ");
	scanf("%d %d %d", &x, &y, &z);
	
	if(x>y && x>z)
	{
		printf("%d is greatest", x);
	}
	else if(y>z && y>x)
	{
		printf("%d is greatest", y);
	}
	else
	{
		printf("%d is greatest", z);
	}
	return 0;
}
