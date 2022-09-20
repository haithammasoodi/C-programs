/* Program in C to check whether a number is even or odd */

#include <stdio.h>
int main()
{
	int i;
	
	printf("Enter the number ");
	scanf("%d", &i);
	
	if(i % 2 == 0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	
	return 0;
}
