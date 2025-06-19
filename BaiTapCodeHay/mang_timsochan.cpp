#include <bits/stdc++.h>
using namespace std;

void nhap(int arr[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"arr["<<i<<"]["<<j<<"]: "; cin>>arr[i][j];
		}
	}
}

void hienthi(int arr[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
}


void timsochan(int a[10][10], int n){
	int kiemtra=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]%2==0 && a[i][j] < 2004){
				kiemtra=1;
			}
		}
	}
	if(kiemtra==0){
		cout<<"Khong co";
	} else if(kiemtra==1){
		cout<<"Co";
	}
}

int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int arr[10][10];
	nhap(arr,n);
	hienthi(arr,n);
	timsochan(arr,n);
}



