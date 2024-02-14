#include<iostream>

using namespace std;

int main(){
	//Goto statement is excessed by label
      
	int n=1;
	loop:  //Label
	cout<<n<<". Pakistan"<<endl;
	n++;
	
	if(n<=5)  goto loop; 
	cout<<"The End";
	
	return 0;
}
