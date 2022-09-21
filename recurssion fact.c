/* Program in C to find the factorial of an integer using recurrsion*/
#include <stdio.h>
int refact(int);
int main ()
{
	int n, r;
	printf("Enter the integer  ");
	scanf("%d", &n);
	r = refact(n);
	printf("%d",r);
}

int refact(int n)
{
	if (n==1)
		return 1;
	else
		return n*refact(n-1);	
}
