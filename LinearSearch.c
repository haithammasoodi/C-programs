/* Program in C to search an element in an array using linear search method */
#include <stdio.h>
int main()
{
	int i,n,x[10]={1,5,9,6,2,3,21,56,7,2},flag=0;
	printf("Enter any number");
	scanf("%d",&n);
	for (i=0;1<10;i++)
	{
		if (x[i]==n)
		{
			printf("number is found at %d",i+1);
			flag = 1;
			break;
		}
	}
	if (flag==0)
	{
		printf("Element not found");
	}
	return 0;
}