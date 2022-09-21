/* Program in C to display the size of a character array */
#include <stdio.h>
int main()
{
	char arr[100];
	int i;
	printf("Enter the elements \t");
	scanf("%s",&arr);
	i=0;
	while (arr[i] != '\0')
	{
		i++;
	}
	printf("The size of the array = %d ",i);
	return 0;
}