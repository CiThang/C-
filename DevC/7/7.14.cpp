#include <bits/stdc++.h>
using namespace std;

 bool nguyento(int x) {
    if (x <= 1) {
        return false;
    } else if (x == 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void xoa(int x, int a[],int n){
	if(x==n){
		
	}
		for(int i=x; i<n-1;i++){
			a[i]=a[i+1];
		}		
	}

 

int main(){
	int n;
	cout<<"Nhap do dai mang: "; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	for(int i=0;i<n; i++){
		for(int j=i+1;j<n;){
			if(a[i]==a[j]){
				for(int x=j ;x<n;x++){
					a[x]=a[x+1];
				}
				n--;
			} else {
				j++;
			}
			}
		}
	
int sum=0;
for(int i=0;i<n;i++){
	cout<<setw(4)<<a[i];
	if(nguyento(a[i])){
		sum+=a[i];
	}
}
cout<<"\n Tong so nguyen to la: "<<sum;
		return 0;
		}


	

