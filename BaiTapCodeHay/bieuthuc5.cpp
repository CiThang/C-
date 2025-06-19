#include <bits/stdc++.h>
using namespace std;
int giaithua(int n){
	if(n==1){
		return 1;
	}
	return n*giaithua(n-1);
}

int main(){
	int n,x;
	float s=0;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap n: "; cin>>n;
	for(int i=1; i<=n; i++){
		s+= (pow(x,i)/giaithua(i));
	}
	cout<<s;
	return 0;
}
