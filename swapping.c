/* Program in C to swap 2 numbers */
#include <stdio.h>
int main()
{
	int a =3,b=5;
	printf("Before swap = %d %d\n",a,b);
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("After swap = %d %d",a,b);
	return 0;
}