#include<iostream>

using namespace std;

int main()
{
	struct student
	{
		int roll;
		int marks;
		float avg;
		char grade;
	};
	student s;
	cout<<"Enter roll no:";
	cin>>s.roll;
	cout<<"Enter marks:";
	cin>>s.marks;
	cout<<"Enter average:";
	cin>>s.avg;
	cout<<"Enter grade:";
	cin>>s.grade;
	cout<<"You entered following details:\n";
	cout<<"Roll no:"<<s.roll<<endl;
	cout<<"Marks:"<<s.marks<<endl;
	cout<<"Average:"<<s.avg<<endl;
	cout<<"Grade:"<<s.grade<<endl;
	
	return 0;
}
