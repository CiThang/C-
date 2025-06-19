#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	int max=a[0],min=a[0];
	
	for(int i=0; i<n; i++){
		if(a[i]>=max){
			max=a[i];
		} else if(a[i]<=min){
			min=a[i];
		}
	}
	cout<<"Trung binh cong: "<<(max+min)/2;
	return 0;
}
