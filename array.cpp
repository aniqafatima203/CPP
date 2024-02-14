#include<iostream>
using namespace std;
main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int n;
	cout<<"Enter an integer:";
	cin>>n;
	int mid;
	int loc=-1;
	int start=0;
	int end=9;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==n)
		{
			loc=mid;
			break;
		}
		else if(n<arr[mid])
		end=mid-1;
		else
		start=mid+1;
	}
	if(loc==-1)
	cout<<"Not found";
	else
	cout<<"Found"<<loc;
	
	return 0;
}
