#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	float s=0;
	cout<<"n = "; cin>>n;
	for(float i=1; i<=n; i++){
		s+=i/(i+1);
		
//		cout<<i/(i+1)<<endl;
	}
	cout<<s;
}
