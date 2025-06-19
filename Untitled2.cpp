#include <iostream>
using namespace std;

int main(){
	
	int n;
int sum = 0;
	int k = 1;
	cin>>n;

	if(n>0){
		do{
			sum =0;
			for(int i =1 ; i<=k ; i++){
				sum+=i; // 1 | 0+1+2 = 4 | 0+1+2+3
//			
			}
		  	k++; 
		} while(sum<n);

		cout<<"\n"<<k-2;
	} else {
		cout<<"N";
	}
	return 0;
	
}