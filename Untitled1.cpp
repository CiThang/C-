//#include<iostream>
//using namespace std;
//int main(){
//	int n, tam=0,dem=0;
//	cin>>n;
//	tam=n;
//	while(n>0){
//tam=tam/10;
//	
//		dem++;
//		
//	
//}
//        cout<<dem;
//}
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,N, tam=0,dem=0;
	cin>>n;
	tam=n;
	while(tam>0){
        tam=tam/10;
		dem++;
	}
        cout<<"co so chu so: "<<dem<<endl;

	tam=n;
	N=tam%10;
	cout<<"So cuoi cung: "<<N<<endl;

		
	N=tam/(pow(10,(dem-1)));
	cout<<"So dau tien : "<<N<<endl;
	tam=0;
	while(n>0){
		tam = tam*10+(n%10);
           n=n/10;
	}
	cout<<"so dao nguoc: "<<tam;
	
}