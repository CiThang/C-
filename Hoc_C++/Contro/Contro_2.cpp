#include <iostream>
using namespace std;
int main()
{
	// KHAI BAO CON TRO
	int *ptr;				// Khai bao con tro kieu int
	double *ptr_double;		// Khai bao con tro kieu doube
	cout<<"Dia chi cua bien con tro ptr: ";
	cout<<ptr<<endl;
	cout<<"Dia chi cua bien con tro ptr_double: ";
	cout<<ptr_double<<endl;
	
	
	// LAY DIA CHI CUA BIEN
	int x = 10;
	int *ptr_x = &x;
	cout<<"Gia tri cua x: " << x << endl;
	cout<<"Dia chi cua x: "<<&x<<endl;
	cout<<"Dia chi cua bien con tro ptr_x: "<< ptr_x <<endl;
	cout<<"Gia tri cua bien con tro ptr_x: "<<*ptr_x <<endl;
	
	// SU DUNG CON TRO DE TRUY CAP GIA TRI CUA BIEN
	int y = *ptr_x;		// Lay gia tri ma con tro ptr_x tro den (Gia tri cua x);
	cout<<"Gia tri cua bien con tro ptr_x tro den - Gia tri cua y: "<< *ptr_x <<" - "<< y<< endl;
	
	// DUYET MANG BANG CON TRO
	int arr[5]={1,2,3,4,5};
	int *ptr_arr = arr;		// Gan dia chi cua mang cho con tro ptr_arr
	
	for(int i=0;i<5;i++){
		cout<<*(ptr_arr+i)<<" ";	// Dung con tro de truy cap phan tu cua mang
	}
	
	
	return 0;
}
