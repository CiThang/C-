#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
	int TC; cin>>TC;
	while(TC--){
		int n, x; cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i]; // 1 2 0 4
		ll lt = 1, res=0;
		for(int i = n-1; i>=0; i--){
			res+=a[i]*lt;
			res%=MOD;
			// tai a[] = 4 thi lt =1
			// tai a[] = 0 thi lt = lt*x = x;
			// tai a[] = 2 thi lt = lt*x*x = x*x;
			// tai a[] = 1 thi lt = lt*x*x*x = x*x*x
			lt*=x; 
			lt%=MOD;
			
		}	
		cout<<res<<endl;
	}
}