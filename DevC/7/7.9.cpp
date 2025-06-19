
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Nhap do dai mang: "; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
		for(int i=0;i<n; i++){

		for(int j=i+1;j<n;){
			if(a[i]==a[j]){
				for(int x=j ;x<n;x++){
					a[x]=a[x+1];
				}
				n--;
			} else {
				j++;
			}
			}
		}
	for(int i=0; i<n; i++){
		cout<<setw(4)<<a[i];
	}
	return 0;
	
}
