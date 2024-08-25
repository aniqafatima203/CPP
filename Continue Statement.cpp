#include<iostream>
using namespace std;
int main(){
	
	//The program display the numbers that are non-divisor of 3

for(int i=1;i<100;i++){
	
	if(i%3==0){
		continue;      //Continue statement skip the next iteration of loop
	}
	cout<<i<<endl;
}

return 0;
}

