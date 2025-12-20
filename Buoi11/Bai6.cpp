/*
	6. Nhap diem trung binh cua 1 hoc sinh.
	Neu diem > 0 && diem < 5 => Yeu
	Neu diem >= 5 && diem < 6.5 => trung binh
	Neu diem >= 6.5 && diem < 8 => Kha
	Con lai => gioi
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void kiemTra(int a){
	if(a < 0 || a > 10){
		cout << "Nhap sai" << endl;
	}
	else if(a < 5){
		cout << "yeu" << endl;
	} else if(a < 6.5){
		cout << "trung binh" << endl;
	} else if(a < 8){
		cout << "kha" << endl;
	} else {
		cout << "gioi" << endl;
	}
	return;
}
int main(){
	int a = nhap();
	kiemTra(a);
	return 0;
}
