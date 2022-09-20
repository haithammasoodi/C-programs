/* Program in C to check whether a number is prime or not*/

#include <stdio.h>
int main()
{
	int i, n, flag = 0;
	printf("Enter the value of n : \t");
	scanf("%d", &n);
	
	if(n == 0 || n == 1)
	{
		flag = 1;
	}
	for (i=2; i<= n-1; i++)
	{
		if(n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("%d is prime ", n);
	}
	else
	{
		printf("%d is not prime", n);
	}
	return 0;
}
