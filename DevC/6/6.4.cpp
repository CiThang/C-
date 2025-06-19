#include <bits/stdc++.h>
using namespace std;

int sum(int n){
//	vector<int> digit;
//	while(n>0){
//		digit.push_back(n%10);
//		n/=10;
//	}
//	int s=0;
//	for(int i=0; i<digit.size();i++){
//		s+=digit[i];
//	}
//	return s;
	
	int sum = 0;
    while (n > 0) {
        sum += n % 10;
        num /= 10;
    }
    return n;
}

int find(int a, int b){
	int max=0;
	int x=0;
	for(int i=b; i>=a;i--){
		if(sum(i)>max){
			max=sum(i);	
			x=i;
		}
		
	}
	return x;
}
int main(){
	int a,b;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<find(a,b);
	return 0;
}


