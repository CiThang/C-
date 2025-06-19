#include <iostream>
using namespace std;

// Dinh nghia 1 struct co ten la Point
struct Point{
	int x;
	int y;
};

// Ham tinh tong cua cac thanh vien cua mot Point
void sumOfPoint(Point p){
	int sum = p.x + p.y;
	cout<<"Sum of x and y: "<<sum<<endl;
}

int main(){
	// Khai bao mot bien kieu Point
	struct Point p;
	
	// Gan gia tri cho cac thanh vien cua Point
	p.x = 10;
	p.y = 4;
	
	// Goi ham va truyen bien Point vao
	sumOfPoint(p);
	return 0;
}


