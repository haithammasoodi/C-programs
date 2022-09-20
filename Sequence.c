/* Program in C to Display sequence :(2 4 8 16 32 64 128.....n)*/

#include <stdio.h>
#include <math.h>
int main()
{
	int i, n;
	printf("Enter the value of n : \t");
	scanf("%d", &n);
	for (i=2;i<=pow(2,n);i=i*2)
	{
		printf("%d \t",i);
	}
	return 0;
}
