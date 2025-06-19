#include <bits/stdc++.h>
using namespace std;

void nhap(int arr[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"arr["<<i<<"]["<<j<<"]: "; cin>>arr[i][j];
		}
	}
}

void hienthi(int arr[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
}

void xapxep(int arr[], int n){
	for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void xapxep2chieu(int a[10][10], int n){
	int arr[n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				arr[i]=a[i][j];
			}
		}
	}
	xapxep(arr,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				a[i][j]=arr[i];
			}
		}
	}
}


int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int arr[10][10];
	nhap(arr,n);
	xapxep2chieu(arr,n);
		hienthi(arr,n);
}



