/* Program in C to add two numbers using pointers */
#include <stdio.h>
int main()
{
	int x, y, *p, *q;
	p = &x;
	q = &y;
	printf("Enter the two numbers  ");
	scanf("%d &d", p, q);
	printf("The sum of the two numbers is %d", *p + *q );
	return 0;
}