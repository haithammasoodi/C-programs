/* Program in C to make a Table from 2 to 10 */

#include <stdio.h>
int main()
{
	int i, j, n;
	
	for (i=2;i<=10;i++)
	{
		for (j=1;j<=10;j++)
		{
			n = i*j;
			printf("%d x %d = %d \n", i, j, n);
		}
		printf("\n \n");
	}
	return 0;
}
