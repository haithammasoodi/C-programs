/* Program in C to display the sum of the digits of an integer */
#include <stdio.h>
int main()
{
	int n,r, sum=0;
	printf("Enter an integer ");
	scanf("%d",&n);
	while (n!=0)
	{
		r = n%10;
		sum = sum+r;
		n = n/10;
	}
	printf("The sum of the digits is %d", sum);
	return 0;
}
