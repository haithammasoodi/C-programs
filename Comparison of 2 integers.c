/* Program in C to compare two distinct integers */

#include <stdio.h>
int main()
{
	int i, j, k;
	printf("Enter two integers ");
	scanf("%d %d", &i, &j);
	
	k = i>j ? printf("%d is greater",i) : printf("%d is greater",j);
	return 0;
}
