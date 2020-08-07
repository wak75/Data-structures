#include<iostream>
using namespace std;

int main()
{
	int a[20],n,d,i;
	
	cout<<"enter the size of array: ";
	cin>>n;
	
	cout<<"enter elements of array: ";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"the array is: ";
	for(i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	
	cout<<"enter the element you want to delete: ";
	cin>>d;
	
	for(i=d;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	
	cout<<"the updated array is : ";
	for(i=1;i<=n-1;i++)
	{
		cout<<a[i];
	}
	
}
