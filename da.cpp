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
	printf("���������ͬѧ������:");
	scanf("%s",&xm);
	printf("���������ͬѧ��ѧ��:");
	scanf("%d",&xh);
	printf("���������ͬѧ�����ſγ̳ɼ�\n");
	for(i=0;i<3;i++)
	{
		printf("�����%d�ſγ̳ɼ�:",(i+1));
		cin>>cj[i];
	}
	sum=(cj[0]+cj[1]+cj[2]);
	average=sum/3;
	cout<<"����ͬѧ������:"<<xm<<endl;
	cout<<"����ͬѧ��ѧ��:"<<xh<<endl;
	cout<<"����ͬѧ��ƽ���ɼ�:"<<average<<endl;
}
int main()
{
	
	struct student stud;
	stud.dy();
	return 0;
}
