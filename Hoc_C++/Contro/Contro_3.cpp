#include <iostream>
using namespace std;
int main()
{
	int x;
	int	*ptr = &x;
	cout<<"Nhap gia tri cua x: "; cin>>x;
	
	cout<<"------------------------------------------- \n";
	
	cout<<"Dia chi cua x - Gia tri cua x: "<<ptr<<" - "<<*ptr<<endl;
	
	cout<<"------------------------------------------- \n";
		
	*ptr = 15;
	cout<<"Dia chi cua ptr - Gia tri cua ptr: "<<ptr<<" - "<<*ptr<<endl;
	cout<<"Dia chi cua x - Gia tri cua x: "<<&x <<" - "<<x<<endl;
	
	cout<<"------------------------------------------- \n";
	
	x=30;
	cout<<"Dia chi cua ptr - Gia tri cua ptr: "<<ptr<<" - "<<*ptr<<endl;
	cout<<"Dia chi cua x - Gia tri cua x: "<<&x <<" - "<<x<<endl;
	
	/* Khi ta gan dia chi cua x (x = 15) cho bien con tro *ptr 
		- Thi dia chi cua x la: ptr
		- Gia tri cua x cung nhu gia tri cua dia chi do (*ptr) = 15
	   Neu ta thay doi gia tri tai dia chi(*ptr) do, tuc la *ptr = <Gia tri khac>
	   	- Thi dia chi x van la: ptr 
	   	- Gia tri tai *ptr va x cung thay doi 
	   Tuong tu: Neu ta thay doi gia tri cua x thi dieu tuong tu van xay ra o tren
	*/
	return 0;
}
