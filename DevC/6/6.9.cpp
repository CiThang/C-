#include <bits/stdc++.h>
using namespace std;
int nhap(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	return n;
}
int nguyento(int i){
	if(i<2){
		return 0;
	}
	for(int j=2; j<=sqrt(i); j++){
		if(i%j==0){
			return 0; }
		} return 1;
	}
}
int main(){
	int n;
	n = nhap();
	int dem = 0;
	int i =2 ;
	int ketqua = 1;
	while (dem<n){
		if(nguyento(i)){
			ketqua = ketqua * i;
			dem++;
		}
		i++;
	}
	cout<<"Key qua qua "<<n <<"So nguyen to dau tien = "<<ketqua;
	return 0;
}
