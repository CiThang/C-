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


void timmax(int a[10][10], int n){
	int max=a[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]>=max){
				max=a[i][j];
			}
		}
	}
	cout<<"\n"<<max;
}

int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int arr[10][10];
	nhap(arr,n);
	hienthi(arr,n);
	timmax(arr,n);
}



