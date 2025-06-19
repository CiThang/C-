#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap do dai mang: "; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]="; cin>>a[i];
	}
	double sum=0;
	for(int i=0; i<n; i++){
		sum+=a[i];
	}
	cout<<"Trung binh cong :"<<sum/n;
	return 0;
}
