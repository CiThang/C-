#include <iostream>
using namespace std;

namespace first_space{
	
	void func(){
		cout<<"This is first_space"<<endl;
	}
	
	namespace second_space{
		void func(){
			cout<<"This is second_space"<<endl;
		}
	}
}

using namespace first_space::second_space;
int main(){
	cout<<"hihi \n";
	// Goi ham trong second_space
	func();
	return 0;
}
