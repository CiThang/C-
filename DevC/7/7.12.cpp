#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cout<<"Nhap do dai hang-cot: "; cin>>m; cin>>n;
	int a[10][10];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]="; cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
	int hang,tonghang=0;
	cout<<"Nhap hang muon tinh tong: "; cin>>hang;
	for(int j=0; j<m;j++){
		tonghang+=a[hang][j];
	}
	cout<<"Tong cua hang: "<<hang<<"="<<tonghang<<endl;
	
	int cot,tongcot=0;
	cout<<"Nhap cot muon tinh tong: "; cin>>cot;
	for(int i=0; i<n;i++){
		tongcot+=a[i][cot];
	}
	cout<<"Tong cua cot: "<<cot<<"="<<tongcot<<endl;
	
	cout<<"Nhap hang: "; cin>>hang;
	int max=a[hang][0],min=a[hang][0];
	for(int j=0; j<m;j++){
		if(a[hang][j]>max){
			max=a[hang][j];
		} else if(a[hang][j]<min){
			min=a[hang][j];
		}
	}
	cout<<"Gia tri lon nhat - nho nhat trong hang "<<hang<<" = "<<max<<" - "<<min<<endl;
	
		cout<<"Nhap cot: "; cin>>cot;
	max=a[0][cot];min=a[0][cot];
	for(int i=0; i<n;i++){
		if(a[i][cot]>max){
			max=a[i][cot];
		} else if(a[i][cot]<min){
			min=a[i][cot];
		}
	}
	cout<<"Gia tri lon nhat - nho nhat trong cot "<<cot<<" = "<<max<<" - "<<min<<endl;
	
	
	
	
	
	return 0;
}

