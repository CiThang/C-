#include <iostream>
using namespace std;
int main(){
	int a[6];
	int h;
	cout<<"Nhap so gio lam viec cua 6 nhan vien\n";
	for(int i=0; i<6; i++){
		cout<<"Nhap vien: "<<i+1<<" = "; cin>>a[i];
	}
	cout<<"Hien thi \n";
	for(int i=0; i<6; i++){
		cout<<"NV "<<i+1<<" : "<<a[i]<<endl; 
	}
	return 0;
	
}
