/* Program in C to find the number of sentences in a File */
#include <stdio.h>
int main ()
{
	int num = 0;
	char s;
	FILE *p;
	p = fopen("sentences.txt","r");
	if (p == NULL)
	{
		printf("file doesnt exist");
	}
	else
	{
		s = getc(p);
		while (s != EOF)
		{
			s = getc(p);
			if (s == '.' || s == '!' || s == '?')
			{
				num++;
			}
		}
	}
	printf("Number of sentences are %d", num);
	fclose(p);
}