#include <iostream>
using namespace std;
/*
Chúng ta can tap hop mot gói keo dã dat hàng. Chúng tôi có hai loai keo:
• Gói nho (moi gói 2 viên k?o)
• Gói lon (5 viên keo moi buu kien)
*/
int nhap(){
	int n; cin>>n;
	return n;
}
int kiemtra(int nho, int lon, int mongmuon){
	if(nho*2 + lon*5 == mongmuon){
		cout<<"So luong keo nho duoc yeu cau la:  ";
		return nho;
	} else if(nho*2 + lon*5 > mongmuon){
		cout<<"So luong keo nho duoc yeu cau la:  ";
		return (mongmuon-(lon*5))/2;
	} else {
		cout<<"Ban khong the thuc hien bat cu giao dich nao ";
		return -1;
	}
}
int main(){
	int a,b,c;
	cout<<"Nhap so luong keo nho: ";
	a = nhap();
	cout<<"Nhap so luong keo lon: ";
	b = nhap();
	cout<<"Nhap so luong mong muon: ";
	c = nhap();
	cout<<kiemtra(a,b,c);
	return 0;
}

