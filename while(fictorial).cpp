#include<iostream>

using namespace std;

int main()
{
	int n,a,f;
	a=1;
	f=1;
	cout<<"Enter a number ";
	cin>>n;
	while(a<=n)
	{
		f=f*a;
	    a++;
	}
	cout<<"Fictorial is "<<f;
	
	return 0;
}
