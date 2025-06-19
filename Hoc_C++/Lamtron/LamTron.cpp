#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a = 1.23456;
	int n;
	cout<<"a = "<<a << endl; 
	cout<<"Ban muon lam tron bao nhieu so : "; cin>>n;
	cout<<"a = "<<setprecision(n)<<a;
	return 0;
}