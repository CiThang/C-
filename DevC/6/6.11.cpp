#include <iostream>
using namespace std;

double area(double r){
	return r*r*3.14;
}

int main()
{
	double r=10;
	double *x = &r;
//	cout<<"Nhap gia tri ban kinh: "; cin>>r;
	cout<<area(*x)<<endl;
	r=20;
	cout<<area(*x);
	return 0;
}
