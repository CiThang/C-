#include <bits/stdc++.h>
using namespace std;

void uln(int n){
	for(int i=n-1; i>0; i--){
		if(n%i==0 && i%2!=0){
			cout<< i<<"  ";
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	uln(n);
	return 0;
}
