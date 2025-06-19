#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n+1];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	int x;
	cout<<"Nhap vi tri muon chen: "; cin>>x;

	for(int i=n+1; i>=x; i--){
		a[i]=a[i-1];
	}
	cout<<"Nhap gia tri muon chen: "; cin>>a[x-1];
	
	for(int i=0;i<n+1;i++){
		cout<<setw(4)<<a[i];
	}
	return 0;
}
