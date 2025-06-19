#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Nhap gia tri cua mang: "; cin>>n;
	int a[n],b[n];
	for(int i=0;i<n; i++){
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	for(int i=0;i<n; i++){
		cout<<"b["<<i<<"]="; cin>>b[i];
	}
	for(int i=0;i<n;i++){
		a[i]=a[i]*b[i];
		cout<<setw(4)<<a[i];
	}
	
	
}
