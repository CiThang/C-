#include<iostream>
using namespace std;

int main(){
	
	// check vung kieu du lieu short, int
	cout<<"min kieu int la: "<<INT_MIN<<endl;
	cout<<"max kieu int la: "<<INT_MAX<<endl;
	
	cout<<"min kieu short la: "<<SHRT_MIN<<"\n";
	cout<<"max kieu short la: "<<SHRT_MAX<<"\n";
	 
	
	//1. ep kieu rong (ep tu kieu be -> lon ) khong lo mat kieu du lieu
	short a =10;
	// xuat ra gia tri a:
	cout<< "a = "<<a<<endl;
	
	// khai bao bien b la kieu int
	int b;
	b=a; // ep tat
	b = (int)a;
	cout<<"b = "<<b<<endl;
	
	//2. ep kieu hep (ep tu kieu lon -> be)
	float soA = 1.25f;
	int soB;
	soB = soA; // ep tat
	soB = (int)soA;
	cout<<"soA = "<<soA<<endl;
	cout<<"soB = "<<soB<<endl;
	
	// giai thich "co the" mat du lieu : "nuoc it trong binh co the do vua trong ly"
	int c = 5000;
	short d = c;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	return 0;
		
}