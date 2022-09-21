/* Program in C to find the sum of two integers using functions*/
#include <stdio.h>
int add(int, int);
int main ()
{
	int x, y, z;
	printf("Enter two integers  ");
	scanf("%d %d", &x, &y);
	z = add(x,y);
	printf("The sum is = %d",z);
}
int add(int x, int y)
{
	int z;
	z = x+y;
	return (z);
}
