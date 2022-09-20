/* Program in C to make a table */

#include <stdio.h>
int main()
{
	int i, j;
	printf("Enter a number ");
	scanf("%d",&i);
	
	for(j=1;j<=10;j+=1)
	{
		printf("%d x %d = %d \n",i, j, j*i);
	}
	
	return 0;
}
