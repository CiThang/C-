#include <iostream>
using namespace std;

int BinarySearch(int a[], int k, int n){
	int left = 0;
	int right = n-1;
	while(left <= right){
		int mid = (left+right)/2;
		if(a[mid]==k){
			return mid;
		} else if(a[mid]<k){
			left = mid + 1;
		} else {
			right = mid -1;
		}
	}
	return -1;
}


// 4 2 3 1 5 8
void InsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j] > a[j - 1]) { 
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j -= 1;
        }
    }
}


void SelectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int i_max = i; 
        int v_max = a[i]; 
        for (int j = i + 1; j < n; j++) {
            if (a[j] >= v_max) { 
                v_max = a[j];
                i_max = j;
            }
        }
        int temp = a[i_max];
        a[i_max] = a[i];
        a[i] = temp;
    }
}



void BubbleSort(int a[], int n) {
    int i, j;
    bool haveSwap;
    for (i = 0; i < n - 1; i++) {
        haveSwap = false;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) { 
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                haveSwap = true;
            }
        }
        if (haveSwap == false) {
            break;
        }
    }
}


void print(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Nhap n "; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	InsertionSort(a,n); print(a,n); cout<<"\n";
	SelectionSort(a,n); print(a,n); cout<<"\n";	
	BubbleSort(a,n); print(a,n); cout<<"\n";
	cout<<"Nhap k : ";cin>>k;
	cout<<"Vi tri cua k: "<<BinarySearch(a,k,n)<<"\n";
	
	
	
}
















