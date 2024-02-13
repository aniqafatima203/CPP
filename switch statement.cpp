#include <iostream>

using namespace std;

int main(){
	char a;
	//what type of book do you want to read?
	cout<<"NOTE: Categories of book "<<endl;
	cout<<" p for Paradise lost\n a for Atomic habits"<<endl;
	cout<<" h for Hacking \n s for Psycology of money"<<endl;
	cout<<"Enter book according to above categories:"<<endl;
	//lets see the price of these books
	cin>>a;
	
	switch(a)
	{
	case 'p':
	cout<<"Paradise lost ,price:Rs.350";
	break;
	      case 'a':
	      cout<<"Atomic habits ,price:Rs.430";
	      break;
	           case 'h':
	           cout<<"Hacking ,price:Rs.500";
		   break;
			case 's':
		        cout<<"Psycology of money ,price:Rs.450";
		        break;
	default:
        cout<<"Sorry! We don't have this book";	
	}
	return 0;
}
