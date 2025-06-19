#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
//	Bien = Bieu thuc 1 ? "tra ve gia tri neu BT1 dung" : "tra ve gia tri neu BT1 sai"
	string traLoi = (n%2 == 0) ? "Chan" : "Le";
	cout<<traLoi;
	return 0;
}