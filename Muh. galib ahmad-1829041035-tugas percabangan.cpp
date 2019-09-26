#include<iostream>
using namespace std;
int main() {
	int x,y,pil;
	int penjumlahan,pengurangan;
	float pembagian,perkalian;
	cout<<"kalkulator c++";
		cout<<"pilihan";
	cout<<"1.penjumlahan (+) ";
	cout<<"2.pengurangan (-) ";
	cout<<"3.pembagian (/) ";
	cout<<"4.perkalian (*) ";
	cout<<"masukkan pilihan anda";
	cin>>pil;
	if(pil==1) {
		cout<<"bil_1 ="; cin>>x;
		cout<<"bil_2 ="; cin>>y;
		penjumlahan = x+y;
		cout<<"hasilnya adalah : "<<penjumlahan;
	}
	 else if (pil==2) {
	 	cout<<"bil_1 ="; cin>>x;
	 	cout<<"bil_2 ="; cin>>y;
	 	pengurangan = x-y;
	 	cout<<"hasilnya adalah : "<<pengurangan;
	}
	else if (pil==3) {
		cout<<"bil_1 ="; cin>>x;
		cout<<"bil_2 ="; cin>>y;
		pembagian = x/y;
		cout<<"hasilnya adalah : "<<pembagian;
	}
	else if (pil==4) {
		cout<<"bil_1 ="; cin>>x;
		cout<<"bil_2 ="; cin>>y;
		perkalian = x*y;
		cout<<"hasilnya adalah : "<<perkalian;
	}
	else{
		cout<<"anda tidak memilih";
	}
	return 0;
}
