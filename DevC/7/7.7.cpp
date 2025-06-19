#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=i+1; j<n; j++){
			if(a[i]==a[j]){
				dem++;
			}
		}
		if(dem==1){
			cout<<a[i]<<"  ";
		}
	}
	
	
	
}
