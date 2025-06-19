#include <iostream>
using namespace std;

int main()
{
	//countine 
	for(int i = 0 ; i <= 5; i++){
		if(i==2) continue; // bo qua 2
		else 
		{
			cout<<"i = "<<i<<endl;
		}
	}
	cout<<"\n-----------------------------\n";
	// break
	for(int i=0; i<=5; i++){
		if(i==3) break; // dung chuong trinh khi i=2;
		else{
			cout<<"i = "<<i<<endl;
		}
	}
	return 0;
}