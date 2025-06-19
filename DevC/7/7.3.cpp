#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	int x=0;
	cout<<"Nhap vi tri muon xoa"; cin>>x;
	for(int i=x; i<n-1;i++){
		a[i]=a[i+1];
	}
	
	cout<<"Mang sau khi xoa: ";
	for(int i=0; i<n-1; i++){
		cout<<setw(4)<<a[i];
	}
	return 0;
}
