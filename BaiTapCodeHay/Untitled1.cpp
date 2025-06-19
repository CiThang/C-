#include <bits/stdc++.h>
using namespace std;



void nhap(int arr[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"arr["<<i<<"]["<<j<<"]"; 
			cin>>arr[i][j];		
		}
	}
}

void hienthie(int arr[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<"   "; 
				
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"Nhap n=m"; cin>>n;
	int arr[10][10];
	nhap(arr,n);
	hienthie(arr,n);
	return 0;
	
	
}

