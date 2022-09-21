/* Program in C to swap using call by reference */
#include<stdio.h>
void swap (int *,int *);
int main()
{
	int x,y;
	x=3;
	y=5;
	printf("A %d %d \n",x,y);
	swap(&x,&y);
	printf("B %d %d\n",x,y);
	return 0;
}
void swap (int *p1, int *p2)
{
	int x,y,temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("C %d %d\n",*p1,*p2);
}