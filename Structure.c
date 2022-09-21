/* Program in C input the details of all the students in a class using Structures */
#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
	int i;
	struct student s[5];
	for (i=0;i<5;i++)
	{
		printf("Enter Roll no, Name and Marks of student %d ",i+1);
		scanf("%d %s %f",&s[i].rollno ,&s[i].name, &s[i].marks);
	}
	printf("Roll no. \tName \tMarks \n");
	for (i=0;i<5;i++)
	{
		printf("%d        \t%s    \t%f \n",s[i].rollno, s[i].name, s[i].marks);
	}
	return 0;
	
	
	
}
