#include<stdio.h>
struct studentdata
{
	int stu_rollno;
	char *stu_name[20];
	int stu_age;
};
int main()
{
	struct studentdata student;
	student.stu_name="vishal";
	student.stu_age=20;
	student.stu_rollno=10;
	printf("student name is:%s",student.stu_name);
	printf("student age is:%d",student.stu_age);
	printf("student rollno is:%d",student.stu_rollno);
	
	return 0;
}
	


