/* Program in C to display an array in reverse using pointers */
#include <stdio.h>
int main()
{
	int i,n;
	printf("Number of elements ");
	scanf("%d", &n);
	int arr[n];
	int *p = &arr[n-1];
	printf("Enter the elements of the array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf ("The array is ");
	for (i=n-1;i>=0;i--)
	{
		printf("%d ",*p);
		p-=1;
	}
	return 0;
}