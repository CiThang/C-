#include <iostream>
using namespace std;

struct sach{
	string tieude;
	string tacgia;
	int sotrang;
	
	// Constructor rong - Constructor mac dinh
	sach(){
		tieude="";
		tacgia="";
		sotrang = 0;
	}
	
	// Constructor co tham so
	sach(string td, string tg, int st){
		tieude = td;
		tacgia = tg;
		sotrang = st;
	}
	
	// Phuong thuc hien thi 
	void hienthithongtin(sach s){
		cout<<"Tieu de: "<<s.tieude<<endl;
		cout<<"Tac gia: "<<s.tacgia<<endl;
		cout<<"So trang: "<<s.sotrang<<endl;
	}
	
};

int main(){
	struct sach s;
	sach s1("Tri Tue Do Thai ","Eran Katz",440);
	sach s2("Thuat Thao Tung","Wladislaw",390);
	cout<<"Hien thi thong tin \n";
	s.hienthithongtin(s2);
	s.hienthithongtin(s1);
	return 0;
}
