/* Program in C to write a File */
#include <stdio.h>
int main ()
{
	int x;
	char s[20] = "Hello";
	FILE *p;
	p = fopen("file1.txt","w");
	x = 9;
	fprintf(p,"%d %s",x,s);
	fclose(p);
}