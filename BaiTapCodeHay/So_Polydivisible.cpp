#include <bits/stdc++.h>
using namespace std;

void kt_polydivisible(int n){
	// 	VI DU SO n = 345654
	int N = n;
// Khai bao Vector, Vector co ten bien la digit 
	vector<int> digit;
	while(n > 0){
		/* Dua tung chu so cua n vao digit(Vector) 
		vi du: n=345654
		thi mang vecto chua cac phan tu theo thu tu la: 3 4 5 6 5 4
		*/
		digit.push_back(n % 10); // push_back: them gia tri vao mang => mang : 4 5 6 5 4 3
		n/=10;}
	reverse(digit.begin(), digit.end()); 	// Dao nguoc lai mang digit => mang : 3 4 5 6 5 4
	bool ketqua = true;
	n = digit[0];
	int dem = 1, a=1;
	cout <<dem<<" so dau tien la so "<<n%10<<" chia het "<<dem<<"\n";
	for(int i=1 ; i<digit.size();i++){
		dem = dem + 1;
		n = n*10 + digit[i];
		/* Thay vi kiem tra xong in ra ket luan 
		Code ben duoi cho chay ket luan truoc xong bat dau kiem tra
		Neu kiem tra ma sai thi dung chuong trinh (break), neu dung thi tiep tuc vong lap 
		*/
		cout<<dem<<" so dau tien la so "<< n <<" chia het "<<dem<<endl;
		if(n%(i+1) != 0){
			ketqua = false;
			break;
		}
		}
		// In ra ker qua
		if (ketqua){
			cout<< N << " La so Polydivisible. ";
		} else {
			cout<< N << " Khong phai la so Polydivisible. ";
		}
}
int main(){
	int n;
	cout<<"Nhap vao so: ";
	cin>>n;
	kt_polydivisible(n);
	return 0;
}
