#include <bits/stdc++.h>
using namespace std;

int uln(int n){
	for(int i=n-1; i>0; i--){
		if(n%i==0 && i%2!=0){
			return i;
		}
	}
	return 1;
}
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<uln(n);
	return 0;
}
