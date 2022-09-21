/* Program in C input the details of the topper in a class using Structures */
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
	float max;
	int j;
	max = s[0].marks;
	for (i=0;i<5;i++)
	{
		if (max < s[i].marks)
		{
			max = s[i].marks;
			j = i;
		}
	}
	printf("%d        \t%s    \t%f \n",s[j].rollno, s[j].name, s[j].marks);
	return 0;
	
	
}
