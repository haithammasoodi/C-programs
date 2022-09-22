/* Program in C to display the length of a name using pointers */
#include<stdio.h>
int main()
{
	int l=0;
	char name[100],*p;
	printf("Enter your first name ");
	scanf("%s",&name);
	p = &name[0];
		while(*p!='\0')
		{
			l++;
			p++;
		}
	printf("The number of letters in your name are : %d",l);
	return 0;
}
