/* Program in C to find the sum of all the elements of an array using functions*/
#include <stdio.h>
int asum(int []);
int main ()
{
	int arr[] = {1,2,3,4,5,6}, sum;
	sum = asum(arr);
	printf("Sum of elements = %d",sum);
}

int asum(int arr[])
{
	int i, sum = 0;
	for (i=0;i<6;i++)
	{
		sum = sum + arr[i];
	}
	return (sum);
}
