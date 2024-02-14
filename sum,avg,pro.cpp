#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,d;
	cout<<"Enter four numbers: ";
	cin>>a>>b>>c>>d;
	//To find sum, average & product
	
	int sum=a+b+c+d;
	float avg=(a+b+c+d)/4;
	int pro=a*b*c*d;
	cout<<"Sum is "<<sum<<endl;
	cout<<"Avarge is "<<avg<<endl;
	cout<<"Product is "<<pro<<endl;
	
	return 0;
}
