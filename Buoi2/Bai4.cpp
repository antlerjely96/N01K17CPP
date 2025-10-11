/*
	4. Nhap diem trung binh cua 1 hoc sinh.
	Neu diem > 0 && diem < 5 => Yeu
	Neu diem >= 5 && diem < 6.5 => trung binh
	Neu diem >= 6.5 && diem < 8 => Kha
	Con lai => gioi
*/
#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	double diem;
	//Nhap diem
	cout << "diem = ";
	cin >> diem;
	//Kiem tra diem
	if(diem < 0){
		cout << "Nhap sai" << endl;
	} else if (diem < 5){
		cout << "yeu" << endl;
	} else if(diem < 6.5){
		cout << "trung binh" << endl;
	} else if(diem < 8){
		cout << "kha" << endl;
	} else {
		cout << "gioi" << endl;
	}
	return 0;
}
