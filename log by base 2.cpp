#include<iostream>
#include<cmath>  
      //We use this header file bcz we use math's term log in program
      
using namespace std;

int main(){
	
	float n;
	//n is number and ln is logarithm
	cout<<"Enter a value:";
	cin>>n;
	float ln;
	ln=log10(n)/log10(2);
	cout<<"Log with base 2: "<<ln;
	
	return 0;
}
