#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	
	cout<<"Kich thuoc cua mang la "<<n<<endl;
	for(int i=0;i<n; i++){
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
	
	int max=0;
	for(int i=0; i<n; i++){
		if(a[i]>=max){
			max = a[i];
		}
	}
	cout<<"Phan tu lon nhat cua mang: "<<max;
	return 0;
}
