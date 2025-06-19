#include <bits/stdc++.h>
using namespace std;

//int arr(int n){
//	return a[n][n];
//}


void nhap(int arr[10][10], int n){
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"arr["<<i<<"]["<<j<<"]"; 
			cin>>arr[i][j];
		}
	}
}

void hienthi(int arr[10][10], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<setw(4)<<arr[i][j];
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Nhap m=n= "; cin>>n;
	int	arr[10][10];
	nhap(arr,n);
	hienthi(arr,n);
	return 0;
}
