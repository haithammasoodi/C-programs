/* Program in C to display the length of a name using pointers */
#include<stdio.h>
int main()
{
	int l;
	char name[100];
	printf("Enter your first name ");
	scanf("%s",&name);
	int *ln = &l;
	char *p = &name[0];
		while(*p!='\0')
		{
			*ln++;
			p++;
		}
	printf("The number of letters in your name are : %d",*ln);
	return 0;
}