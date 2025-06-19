#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
	int n = min(a,b);
	for(int i=n-1; i>=1; i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
	return 1;
}


int main(){
	int a,b;
	cout<<"a,b = "; cin>>a; cin>>b;
	cout<<"UCLN = "<<ucln(a,b);
	return 0;
}
