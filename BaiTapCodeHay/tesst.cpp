#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
	if(n==1){
		return 1;
	}
	return n*giaithua(n-1);
}

int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<giaithua(n);
	return 0;
}
