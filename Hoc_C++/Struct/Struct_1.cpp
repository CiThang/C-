#include <iostream>
using namespace std;

struct Rectangle{
	int width, height;
};

int main(){
	struct Rectangle rec;
	rec.height=10;
	rec.width=2;
	cout<<"Dien tich hinh chu nhat la : "<<rec.height*rec.width;
	return 0;

}
