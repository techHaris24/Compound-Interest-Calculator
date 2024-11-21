#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float A,r,P,t,n,x;
	cout<<"Enter t years of compound interest:"<<endl;
	cin>>t;
	cout<<"Enter Principal P:"<<endl;
	cin>>P;
	cout<<"Enter rate r:"<<endl;
	cin>>r;
	cout<<"Enter times compounded per year n:"<<endl;
	cin>>n;
	x=pow((1+(r/n)),(n*t));
	cout<<"Total Amount A is "<<P*x;
	return 0;
}
