#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int x1,x2,y1,y2;
	//x1,x2 for x cordinate & y1,y2 for y cordinate
	
	cout<<"Enter values for 1 point=";
	cin>>x1>>y1;
	cout<<"Enter values for 2 point=";
	cin>>x2>>y2;
	
	int d;
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"Distance ="<<d;
	
	return 0;
}
