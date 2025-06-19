#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	int demchan=0, demle=0;
	double tongchan=0, tongle=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			demchan++;
			tongchan+=a[i];
		} else{
			demle++;
			tongle+=a[i];
		}
	}
	cout<<"Trung binh cong so chan: "<<tongchan/demchan<<endl;
	cout<<"Trung binh cong so le: "<<tongle/demle;
	
}
