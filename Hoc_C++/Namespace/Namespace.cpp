#include <iostream>
using namespace std;

/*
namespace <namespace_name>{
	cod-ham
}
*/

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

int main(){
	// Goi ham tu First_space
	first_space::func();
	
	// Goi ham tu Second_space
	second_space::func();
}
