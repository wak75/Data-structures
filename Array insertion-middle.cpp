//sucessful code for how to insert array in between the array 
#include<iostream>
using namespace std;
int main()
{
	int array[20],i,n,location, inserted;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	cout<<"enter "<<n<<" elements"<<endl;
	for (i=1;i<=n;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the location wehere you want to insert the new element: ";
	cin>>location;
	
	cout<<"Enter the new element: ";
	cin>>inserted;
	
	for(i=n;i>=location;i--)
	{
		array[i+1] =array[i];
	}
	array[location]=inserted;
	n=n+1;
	
	cout<<"The updated array is: ";
	
	for(i=1;i<=n;i++)
	{
		cout<<array[i]<<"\t";
	}
	
}
