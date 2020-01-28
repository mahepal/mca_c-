#include<iostream>
using namespace std;
void swap(int,int);
void swapp(int,int);
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;

	cout<<"x="<<x;
	cout<<"y="<<y;
}
void swapp(int* x1,int* y1)
{
	int temp;
	temp=*x1;
	*x1=*y1;
	*y1=temp;

	cout<<"x="<<*x1;
	cout<<"y="<<*y1;
}
int main()
{

	int n1,n2,temp;
	cout<<"Enter n1=";
	cin>>n1;
	cout<<"Enter n2=";
	cin>>n2;

	
	swap(n1,n2);
	cout<<"\npass by value\n";
	cout<<"n1="<<n1<<"\n";
	cout<<"n2="<<n2<<"\n";
	
	swapp(&n1,&n2);
	cout<<"\npass by reference\n";
	cout<<"n1="<<n1<<"\n";
	cout<<"n2="<<n2<<"\n";


	return 0;
}
