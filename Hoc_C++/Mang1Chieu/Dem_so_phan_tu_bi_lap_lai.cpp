#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int cnt[1000001];

int main(){
	int TC; cin>>TC;
	while(TC--){
		int n; cin>>n;
		int a[n];
		memset(cnt,0,sizeof(cnt));
		for(int i=0; i<n; i++){
			// xem cac gia tri a[i] nhu la index trong mang cnt[]
			cin>>a[i];
			cnt[a[i]]++; // gia tri tai vi tri index = a[i]
		}
		int ans=0;
		for(int i=0; i<n; i++){
			if(cnt[a[i]]>=2) ++ans;
	
		}
		cout<<ans<<endl;
	}
}