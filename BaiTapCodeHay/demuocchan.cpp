#include <bits/stdc++.h>
using namespace std;

int uln(int n){
	int dem=0;
	for(int i=n-1; i>0; i--){
		if(n%i==0 && i%2==0){
			dem++;
		}
	}
	return dem;
}
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<uln(n);
	return 0;
}
