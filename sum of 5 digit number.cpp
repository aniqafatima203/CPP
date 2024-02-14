#include<iostream>

using namespace std;

int main(){
	//Sum of 5 digit of  the number you entered
	
	int n;
	cout<<"Enter 5 digit number:";
	cin>>n;
	int a,b,c,d,e;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	e=n%10;
	n=n/10;
	int sum=a+b+c+d+e;
	cout<<"Sum of "<<a<<b<<c<<d<<e<<" :"<<sum;
	
	return 0;
}
