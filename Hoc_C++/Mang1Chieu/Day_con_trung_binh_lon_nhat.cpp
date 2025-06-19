#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int TC; cin>>TC;
	while(TC--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		int sum=0;
		// goi day la TONG1 tu a[0] dem a[k-1]
		for(int i=0 ; i<k; i++) sum+=a[i];
		int res = sum, idx =0 ;
		// thuc hien tinh tong tiep theo TONG = TONG - a[0](i-k) + a[k]
		for(int i=k;i<n;i++){
			sum=sum-a[i-k]+a[i];
			if(sum>res){
				res = sum;
				idx = i-k+1;
			}
		}
		for(int i=0; i<k;i++){
			cout<<a[idx+i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}