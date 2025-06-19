#include <bits/stdc++.h>
using namespace std;

int nguyento(int n){
	if (n<2){
		return 0;
	}
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		} 
	} return 1;
}

int tinhtich (int n){
	int dem=0;
	int s=1;
	for(int i=1 ; dem<n ; i++){
		if(nguyento(i)==1){
			s*=i;
			dem++;
		}
	}
	return s;
}
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Gia tri: "<<tinhtich(n);
	return 0;
}
