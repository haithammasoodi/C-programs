/* Program in C to check whether a number is a palindrome or not using pointers */
#include<stdio.h>
int main()
{
	int flag=1;
	char name [30],*p, *q;
	p = &name;
	printf("Enter your name ");
	scanf("%s",p);
	q=p;
	while (*p != '\0')
	{
		p++;
	}
	p--;
	while (q<=p)
	{
		if (*p != *q)
		{
			flag = 0;
			break;
		}
		else
		{
			p--;
			q++;
		}
	}
	if (flag == 1)
	{
		printf("Its a Palindrome");
	}
	else
	{
		printf("Not a Palindrome");
	}
	return 0;
}