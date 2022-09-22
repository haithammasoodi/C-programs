/* Program in C to display an array using pointers */
#include <stdio.h>
int main()
{
	int i,n;
	printf("Number of elements ");
	scanf("%d", &n);
	int arr[n],*p;
	p = &arr[0];
	printf("Enter the elements of the array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf ("The array is ");
	for (i=0;i<n;i++)
	{
		printf("%d ",*p);
		p+=1;
	}
	return 0;
}
