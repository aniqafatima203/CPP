#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter positive number:";
	cin>>n;
	int avg,max,min;
	int sum=0;
	int count=0;
	max=n;
	min=n;
	while(n>=0)
	{
		sum+=n;
		count++;
		if(n>max)
		max=n;
		else
		min=n;
		cout<<"enter positive number:";
		cin>>n;
	}
	if(count==0)
	cout<<"no positive number entered"<<endl;
	else
	{
		avg=sum/count;
		cout<<"you entered "<<count<<" number:"<<endl;
		cout<<"average:"<<avg<<endl;
		cout<<"maximum:"<<max<<endl;
		cout<<"minimum:"<<min<<endl;
	}
}
