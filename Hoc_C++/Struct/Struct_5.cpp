#include <iostream>
using namespace std;

struct Rectangle{
	int width, height;
	
	// Constructor khong tham so
	Rectangle(){
		width = 0;
		height=0;
	}
	
	// Constructor co tham so 
	Rectangle(int w, int h){
		width = w;
		height = h;
	}
	
	// Copy constructor
	Rectangle (const Rectangle &other){
		width = other.width;
		height = other.height;
	}
	
	// Phuong thuc tinh dien tich
	void areaOfRectangle(Rectangle rec){
		cout<<"Dien tich :"<<rec.height*rec.width<<endl;
	}
};

int main(){
	
	// Su dung constructor mac dinh
	struct Rectangle r1 ;
	cout<<"r1 width = "<<r1.width<<", height = "<<r1.height<<endl;
	
	// Su dung constructoer co tham so va ham tinh dien tich
	struct Rectangle r2 = Rectangle(3,5);
	cout<<"r2 width = "<<r2.width<<", height = "<<r2.height<<endl;
	r2.areaOfRectangle(r2);
		
	// Su dung copy constructor
	struct Rectangle r3 = r2;
	cout<<"r3 width = "<<r3.width<<", height = "<<r3.height<<endl;
	
}



