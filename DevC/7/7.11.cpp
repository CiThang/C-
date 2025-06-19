#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int m;
	int a[10][10];
	cout<<"Nhap do dai cot: "; cin>>n;
	cout<<"Nhap do dai hang: "; cin>>m;
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]"; 
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<setw(4)<<"a["<<i<<"]["<<j<<"]="<<a[i][j];
		}
		cout<<endl;
	}
	

	cout<<"Tong hang: \n";
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=0;j<m; j++){
			sum+=a[i][j];
		}
		cout<<"Tong hang "<<i<<" = "<<sum<<endl;
	}
	
	cout<<"Tong cot: \n";
	for(int j=0;j<m ;j++){
		int sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i][j];
		}
		cout<<"Tong cot "<<j<<" = "<<sum<<endl;
	}
	return 0;
	
	
}
