#include<iostream>

using namespace std;

int main()
{
	int v;
	float cm,in,g,l,m,km,p,kg;
	char ch;
	cout<<"Enter a value and type of conversion:"<<endl;
	cin>>v>>ch;
	switch(ch)
	{
		case ('a'):
			cout<<"Enter lenght in inches:"<<endl;
			cin>>in;
			cm=in*2.54;
			cout<<"Lenght in centimeter:"<<cm<<"cm"<<endl;
			break;
			case ('b'):
				cout<<"Enter water in gallon:"<<endl;
				cin>>g;
				l=g*3.785;
				cout<<"Water in liter:"<<l<<"liter"<<endl;
				break;
				case ('c'):
					cout<<"Enter distance in mile:"<<endl;
					cin>>m;
					km=m*1.609;
					cout<<"Distance in km:"<<km<<"km"<<endl;
					break;
					case ('d'):
						cout<<"Enter weight in pounds:"<<endl;
						cin>>p;
						kg=p*0.4536;
						cout<<"Weight in kg:"<<kg<<"kg"<<endl;
						break;
						default:
							cout<<"Sorry! Invalid input";
						
		}	
		
		return 0;
}
