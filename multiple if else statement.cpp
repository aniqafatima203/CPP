#include <iostream>

using namespace std;

int main(){
	//This program shows the salary of salesperson according to his status
	char a;
	cout<<"NOTE: Enter s for senior or j for junior salesperson"<<endl;
	cout<<"Enter status of salesperson: "<<endl;
	cin>>a;
	
	if(a=='s')
	cout<<"Salary of senior salesperson is Rs.400 per week "<<endl;
	
	    else if(a=='j')
	    cout<<"Salary of junior salesperson is Rs.275 per week "<<endl;
	    
	        else
	        cout<<"Invalid status";

	return 0;
}
