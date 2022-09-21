/* Program in C to display the reverse of a string using pointers */
#include<stdio.h>
int main()
{
	char *p = "Hello", *q;
	q=p;
	while (*p != '\0')
	{
		p++;
	}
	p--;
	while (*p != *q)
	{
		printf("%c",*p);
		p--;
	}
	printf("%c",*p);
	return 0;
}