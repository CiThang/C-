#include <iostream>
using namespace std;

struct tong{
	int a,b;
	tong(int x, int y){
		a = x;
		b = y;
	}
	sum(){
		cout<<"tong a va b "<<a + b;
	}
};
int main(){
	struct tong t = tong(2,5);
	t.sum();
	return 0;
}
