#include <bits/stdc++.h>
using namespace std;

bool songuyento(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		} 
	}
	return true;
}
void phantich (int n){	
	for(int i=2 ; i<=n; i++){
		int dem =0;
		if(songuyento(i)){
			while (n%i==0){
				n/=i;
				dem++;
			}
			if(dem!=0){
				cout<<i<<"^"<<dem<<" ";
			}
		}
	}
}
int main(){
	int n;
	cout<<"Nhap so n"<<endl;
	cin>>n;
	phantich(n);
	return 0;
}
