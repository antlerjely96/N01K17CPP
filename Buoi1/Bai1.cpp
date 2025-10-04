/*
	Nhap 2 so nguyen a, b tu ban phim.
	Tinh tong, hieu, tich, thuong cua a va b
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a va b
	int a;
	int b;
	//Nhap a, b
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	//Tinh tong (tao ra 1 bien de luu ket qua)
	int tong = a + b;
	//Tinh hieu
	int hieu = a - b;
	//Tinh tich
	int tich = a * b;
	//Tinh thuong
	float thuong = (float)a / b;
	//Hien thi ket qua
	//endl: xuong dong
	cout << "a + b = " << tong << endl;
	cout << "a - b = " << hieu << endl;
	cout << "a * b = " << tich << endl;
	cout << "a / b = " << thuong << endl;
	return 0;
}
