#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
	int TC; cin>>TC;
	while(TC--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++ ) cin>>a[i];
		sort(a,a+n,greater<int>());
		for(int i=0; i<k; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
		
}