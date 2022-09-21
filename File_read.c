/* Program in C to read a File */
#include <stdio.h>
int main ()
{
	int x;
	char s[20];
	FILE *p;
	p = fopen("file1.txt","r");
	if (p == NULL)
	{
		printf("file doesnt exist");
	}
	else
	{
		fscanf(p,"%d %s",&x,&s);
		printf("File contents are %d %s",x,s);
	}
	fclose(p);
}