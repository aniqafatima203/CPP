#include<iostream>

using namespace std;

int main(){
    //Enumeration is user defined type that consist of set of named integral constants.
    
	enum year{jan,feb,march,april,may,june,july,august,sep,oct,nov,dec};
	year y;
	y=march;
	cout<<"The value of y is:"<<y<<endl;
	
	return 0;
}
