#include <iostream>
using namespace std;

double getLength(){
	double length;
	cout<<"Nhap chieu dai: ";
	cin>>length;
	return length;
}

double getWidth(){
	double width;
	cout<<"Nhap chieu rong: ";
	cin>>width;
	return width;
}

double getArea(double l, double w){
	return l*w;
}

void displayData(double l, double w, double a){
	cout <<"Length: "<<l<<" | Width: "<<w<<" | Area: "<<a<<endl;
}
int main(){
	double length, width, area;
	length = getLength();
	width = getWidth();
	area = getArea(length,width);
	displayData(length,width,area);
	return 0;
}

