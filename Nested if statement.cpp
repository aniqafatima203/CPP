#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	//lets see which one of them is greater
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	
	if(a>b)
	  if(a>c)
	  cout<<"a is greater than all";
	  else
	  cout<<"c is greater than all";
	  
	else
	   if(b>c)
	   cout<<"b is greater than all";
	   else
	   cout<<"c is greater than all";
	   
	   return 0;
}
