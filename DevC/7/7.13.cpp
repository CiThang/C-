#include <bits/stdc++.h>
using namespace std;

int dem(int x, int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(x==a[i]){
			dem++;
		}
	}
	return dem;
	
}

int main(){
	int n;
	cout<<"Nhap do dai mang :"; cin>>n;
	int a[n];
	
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	
	
	
	int max=a[0];
	
	for(int i=0; i<n; i++){
		cout<<setw(4)<<a[i];
		if(a[i]>=max){
			max=a[i];
		} 
	}
	
	
	cout<<"Gia tri lon nhat la: "<<max<<endl;
	cout<<"So lan xuat hien: "<<dem(max,a,n);
	return 0;
	
	
	
}
