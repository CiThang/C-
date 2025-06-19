#include<iostream>
using namespace std;
//
//f(0) = 0
//f(1) = 1
//f(2) = f(0)+f(1) = 1
//f(3) = f(2)+f(1) = 2
// f4 = 3
// f5 5
//f6 8
// f(n) = f(n-1) + f(n-2)
int main(){
	int f_0 = 0;
	int f_1 = 1;
	int f=0;
	int tam;
	int n;
	cin>>n;
//	int f=0;
//	// vong laop 1
//	// f2 = f1 + f0 = 1 + 0 = 1
//	f = f_1+f_0;
//	f_1 = f // f_1 (f2) mang giá tr? 1
//	f_0 = f_1// f_0 (f1) mang giá tr? 1
//	// f hi?n t?i (f2)
//
//	// vong lap 2
//	// f3 = f2+f1
//	f = f_1+f_0;
//	// f(f3) = f_1(f2) + f_0(f1)
//	tam = f_1
//	f_1 = f // f_1(f3) mang giá tr? 2
//	f_0 = tam// f_0(f2) mang giá tr? 1
	
	
	
	
	// vong lap
	for(int i=2; i<=n ;i++){
		f = f_1+f_0; // f2
//vong2 f2  f1  f0
//vong3 f3  f2  f1
//vong4 f4  f3  f2
		// Doi gia tri (lui` gia tri)
		tam = f_1;
		f_1 = f;
		f_0 = tam;
	}
	cout<<f;
	
	
}