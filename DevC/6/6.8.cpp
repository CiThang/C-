#include <bits/stdc++.h>
using namespace std;

void xapxep(int n){
	int a,b,c,d;
	a=n%10; n/=10;	
	b=n%10;	n/=10;
	c=n%10; n/=10;
	d=n%10;	n/=10;
	
	int tang=0,giam=0;
	for(int i=0; i<=9;i++){
		if(a==i || b==i || c==i || d==i){
			tang = tang *10 +i;
		}
	}
	
	for (int i=9 ; i>=0 ; i--){
		if(a==i || b==i || c==i || d==i){
			giam = giam*10 + i;
		}
	}
	cout<<"Ket qua :"<<endl;
	cout<<"Tang dan: "<<tang<<endl;
	cout<<"Giam dan: "<<giam<<endl;
}
int main(){
	int n;
	cout<<"Nhap so n: "; cin>>n;
	if(n>=1000 && n<=9999){
		xapxep(n);
	} else {
		cout<<"N";
	}
	return 0;
}


