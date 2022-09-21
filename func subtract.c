/* Program in C to find the difference of two integers using functions*/
#include <stdio.h>
int sub(int, int);
int main ()
{
	int x, y, z;
	printf("Enter two integers  ");
	scanf("%d %d", &x, &y);
	z = sub(x,y);
	printf("The difference is = %d",z);
}
int sub(int x, int y)
{
	int z;
	z = x-y;
	return (z);
}
