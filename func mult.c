/* Program in C to find the multiple of two integers using functions*/
#include <stdio.h>
int mult(int, int);
int main ()
{
	int x, y, z;
	printf("Enter two integers  ");
	scanf("%d %d", &x, &y);
	z = mult(x,y);
	printf("The multiple is = %d",z);
}
int mult(int x, int y)
{
	int z;
	z = x*y;
	return (z);
}
