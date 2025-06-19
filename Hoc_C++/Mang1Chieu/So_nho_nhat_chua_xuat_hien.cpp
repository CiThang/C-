#include <bits/stdc++.h>
using namespace std;

typedef long long ff;

int cnt[1000002];

int main(){
	int TC; cin>>TC;
	while(TC--){
		int n; cin>>n;
		memset(cnt,0,sizeof(cnt));
		for(int i=0;i<n;i++){
			int x; cin>>x;
			// Dung mang de chua cac phan tu 0 va 1
			// Con cac gia tri thi coi nhu index
			if(x>0) cnt[x] = 1;
			
		}
		for(int i=1; i<sizeof(cnt);i++){
			if(cnt[i]==0){
				cout<<i<<endl;
				break;
			}
		}
//		cout<<endl;
	}
}