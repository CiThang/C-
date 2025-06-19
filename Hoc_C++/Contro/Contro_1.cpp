#include <iostream>
using namespace std;
int main()
{
	int x=20,y;		// Khai bao bien binh thuong
	int *ip;		// Khai bao bien con tro
	
	ip = &y; 		// Dia chi luu tru cua bien con tro
	*ip = x;		// Gia tri cua bien con tro
	
	// In ra dia chi luu tru cua bien con tro ip (y)
	cout<<"Dia chi luu tru cua bien con tro ip: ";
	cout<< ip <<endl;
	
	// gia tri cua dia chi nho cua con tro
	cout<<"Gia tri cua bien *ip: ";
	cout<<*ip<<endl;
	
	// gia tri cua bien x
	cout<<"Gia tri cua bien x: ";
	cout<<x<<endl;
	
	// gia tri cua bien y
	cout<<"Gia tri cua bien y: ";
	cout<<y<<endl;
	return 0;
}
