#include <iostream>
using namespace std;
/*
Ch�ng ta can tap hop mot g�i keo d� dat h�ng. Ch�ng t�i c� hai loai keo:
� G�i nho (moi g�i 2 vi�n k?o)
� G�i lon (5 vi�n keo moi buu kien)
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

