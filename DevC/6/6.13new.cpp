#include <bits/stdc++.h>
using namespace std;
void hoandoi(int *x, int *y){
	int tam;
	tam=*x;
	*x=*y;
	*y=tam;
}


int main(){
	int a,b;
	cout<<"Nhap gia tri cua A: ";	cin>>a;
	cout<<"Nhap gia tri cua B: ";	cin>>b;
	cout<<"Ket qua chua hoan doi: "<<a<< " " <<b<<endl;
	hoandoi(&a,&b);
	cout<<"Ket qua sau hoan: "<<a <<" "<<b;
	return 0;
}
