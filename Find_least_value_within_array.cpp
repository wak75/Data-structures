#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,min=0;
	cout<<"entyer array size: ";
	cin>>n;
	
	cout<<"enter the array element: ";
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	min=a[0];

	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}	
	}	
	cout<<"smallest number is: "<<min;
}
