#include <iostream>
using namespace std;
/*
So Prime Factorization l� so sao cho c�c so nguy�n to tu 1 den n m� nh�n (hoac luy thua) = ch�nh n�. V� du 330: gom so nguy�n to tu 1 d?n 330 l� : 1, 2, 3, 5, 7,11, 13,17,��.
330=2x3x5x11;
V� du: Case 1: So luong so nguy�n to = so luong so chu so n, vd 2x7=14(2 so)
Case 2: So luong so nguy�n to < so luong so chu so n, vd 5^3=125(3 so)
Case 3: So luong so nguy�n to > so luong so chu so n, vd 2x3x5x11=330 (3 so)
*/


int factorization(int n){
	int dem,temp=0;
	for(int i=2; i<=n; i++){
		dem=0;
		while (n%i==0){
			++dem;
			n/=i;
		}
		if(dem){
			temp++;
		}
	}
	return temp;
}
int dem(int n){
	int temp = 0;
	while(n != 0){
		temp++;
		n/=10;
	}
	return temp;
}

int main(){
	int n;
	cout<<"Nhap so n "; cin>>n;
	if(dem(n)==factorization(n)){
		cout<<"Case 1";
	} else if(dem(n)>factorization(n)){
		cout<<"Case 2";
	} else {
		cout<<"Case 3";
	}
	return 0;
}
