#include <iostream>
using namespace std;

// First namespace
namespace first_space{
	void func(){
		cout<<"Thi is first_space"<<endl;
	}
}

// Second namespace
namespace second_space{
	void func(){
		cout<<"Thi is second_space"<<endl;
	}
}

using namespace first_space;
int main(){
	func();
	return 0;
}
