#include <bits/stdc++.h>
using namespace std;

int daoham(int x,int y){
	return y*pow(x,y-1);
}
int main(){
	int x,y;
	cout<<"Nhap gia tri x: "; cin >>x;
	cout<<"Nhap gia tri y: "; cin>>y;
	cout<<"F'(x) = "<<daoham(x,y);
	return 0;
}
