#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n : "; cin>>n;
	string kq = (n>=8)? "Gioi" : ((n>=6.5) ? "Kha" : ((n>=5) ? "Trung binh" : "Yeu" ));
	cout<<kq;
	return 0;
	
}