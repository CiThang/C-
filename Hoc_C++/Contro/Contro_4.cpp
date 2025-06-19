#include <iostream>
using namespace std;
int main()
{
	int a = 100;
	int *ptr1 = &a ;
	// con tro dung nhu chiec hop de luu gia tri
	// gia tri co the thay doi nhung dia chi thi khoong thay doi
	cout<<"Dia chi cua bien a: "<<&a<<endl;
	cout<<"Gia tri cua a: "<<a<<endl;
	cout<<"Dia chi cua bien a thong qua bien con tro: "<<ptr1<<endl;
	int *ptr2 = &a;
	cout<<"Dia chi cua bien a thong qua bien con tro: "<<ptr2<<endl;
	cout<<"Gia tri cua bien con tro ptr1: "<<*ptr1<<endl;
	cout<<"Gia tri cua bien con tro ptr2: "<<*ptr2<<endl;
	
	a=200;
	cout<<"Gia tri cua bien con tro ptr1: "<<*ptr1<<endl;
	cout<<"Gia tri cua bien con tro ptr2: "<<*ptr2<<endl;
	return 0;
}

