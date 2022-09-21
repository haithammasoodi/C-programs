/* Program in C to display fibonacci series using recurrsion*/
#include <stdio.h>
int recfib(int);
int main ()
{
	int i, r, n;
	printf ("Enter the term  ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		r = recfib(i);
		printf("%d \t",r);
	}
}

int recfib(int n)
{
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else
		return recfib(n-1) + recfib(n-2);
}
