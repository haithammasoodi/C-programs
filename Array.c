/* Program in C to display the elements of an array */
#include <stdio.h>
int main()
{
	int i,x[5];
	printf("Enter the values \n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("The array is \n");
	for (i=0;i<5;i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
}