#include <bits/stdc++.h>
using namespace std;

int tongn(int n){
    if(n == 1){
        return 1;
    }
    return n + tongn(n - 1);
}


int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	float s=0;
	for(float i=1; i<=n; i++){
		s+=1.0/tongn(i);
	
	}
	cout<<s;
	return 0;
}
