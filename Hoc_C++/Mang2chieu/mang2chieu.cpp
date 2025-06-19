#include <bits/stdc++.h>
using namespace std;

bool nguyento(int n){
	if(n==1){
		return false;
	} else {
		for(int i=2; i<=sqrt(n) ;i++){
			if(n%i==0)
				return false;	
		} 
	}
	return true;
}


int main(){
	
	
	
	
	cout<<"Nhap phan tu vao mang 2 chieu \n";
	// Nhap phan tu vao mang 2 chieu
	int n;
	int a[10][10];
	cout<<"Nhap n=m:";
	cin>>n;
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]"; 
			cin>>a[i][j];
		}
	}
	
	cout<<"Hien thi mang 2 chieu ra man hinh \n";
	// Hien thi mang 2 chieu ra man hinh
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Hien ra cheo chinh trong mang 2 chieu \n";
	// Hien ra cheo chinh trong mang 2 chieu
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				cout<<setw(4)<<a[i][j];
			} else {
				cout<<setw(4)<<"_";
			}
		}
		cout<<endl;
	}
	
	cout<<"Hien ra cheo phu trong mang 2 chieu \n";
	//Hien ra cheo phu trong mang 2 chieu
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((i+j)==(n-1)){
				cout<<setw(4)<<a[i][j];
			} else {
				cout<<setw(4)<<"_";
			}
		}
		cout<<endl;
	}
	
	cout<<"Tinh tong cheo chinh trong mang 2 chieu \n";
	// Tinh tong cheo chinh trong mang 2 chieu
	int sum=0;
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	cout<<"tong cheo chinh: "<<sum<<endl;
	
	cout<<"Tim ra so nguyen to co trong mang 2 chieu \n";
	// Tim ra so nguyen to co trong mang 2 chieu
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(nguyento(a[i][j])){
				cout<<setw(4)<<a[i][j];
			} else {
				cout<<setw(4)<<"_";
			}
		}
		cout<<endl;
	}
	
	cout<<"In ra tong cua tung hang \n";
	// In ra tong tung hang
	for(int i=0; i<n; i++){
		int s=0;
		for(int j=0 ;j<n ; j++){
			s+=a[i][j];
		}
		cout<<s<<endl;
	}
	
	cout<<"In ra tong hang chan \n";
	int sumchan=0,sumle=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2!=0){
				sumchan+=a[i][j];
			} else {
				sumle+=a[i][j];
			}
		}
	}
	cout<<"Tong chan la: "<<sumchan<<endl;
	cout<<"Tong le la: "<<sumle<<endl;
	
	cout<<"In ra gia tri xung quanh \n";	
	// In ra gia tri xung quanh 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0 || i==(n-1)){
				cout<<setw(4)<<a[i][j];
			} else if(j==0||j==(n-1)){
				cout<<setw(4)<<a[i][j];
			} else {
				cout<<setw(4)<<"_";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
