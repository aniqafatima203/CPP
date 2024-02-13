#include <iostream>

using namespace std;

int main(){
	char a;
	cout<<"Do you want to buy a car?"<<endl;
	cout<<"  NOTE: Enter Y for YES or Enter any alphabet for NO    "<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>a;
    
    if(a=='Y')
    {
    	cout<<"hye! Lets start our deal  "<<endl;
    	char n;
    	cout<<"NOTE: Enter C for CIVIC, B for BMW, S for SUPRA"<<endl;
    	cout<<"Enter the name of car which you want to buy:"<<endl;
    	cin>>n;
    	int m;
    	cout<<"Enter the model of car which you want to buy:"<<endl;
    	cin>>m;
    	    if(n=='C'&&m==12)
			cout<<"Price of this car is 100,000"<<endl;
			else if(n=='B'&&m==12)
			cout<<"Price of this car is 200,000"<<endl;
			else if(n=='S'&&m==12)
			cout<<"Price of this car is 205,000"<<endl;
			else
			cout<<"Sorry! We don't have this car"<<endl;
	}
	else
	cout<<"As you wish .. Thankyou";
	return 0;
    
	
}
