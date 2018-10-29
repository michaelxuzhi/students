#include<iostream.h>
#include<stdio.h>
struct student
{
	char xm[20];
	int xh;
	double cj[3];
	void dy();
};
void student::dy()
{
	int i;
	double average,sum;
	printf("请输入该名同学的姓名:");
	scanf("%s",&xm);
	printf("请输入该名同学的学号:");
	scanf("%d",&xh);
	printf("请输入该名同学的三门课程成绩\n");
	for(i=0;i<3;i++)
	{
		printf("输入第%d门课程成绩:",(i+1));
		cin>>cj[i];
	}
	sum=(cj[0]+cj[1]+cj[2]);
	average=sum/3;
	cout<<"该名同学的姓名:"<<xm<<endl;
	cout<<"该名同学的学号:"<<xh<<endl;
	cout<<"该名同学的平均成绩:"<<average<<endl;
}
int main()
{
	
	struct student stud;
	stud.dy();
	return 0;
}
