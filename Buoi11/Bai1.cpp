/*
	Nhap 2 so nguyen a, b tu ban phim.
	Tinh tong, hieu, tich, thuong cua a va b
*/

#include<iostream>
using namespace std;
//Ham nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Ham tinh tong
void tinhTong(int a, int b){
	int tong = a + b;
	cout << "Tong = " << tong << endl;
	return;
}
//Ham tinh hieu
void tinhHieu(int a, int b){
	int hieu = a - b;
	cout << "Hieu = " << hieu << endl;
	return;
}
//Ham tinh tich
void tinhTich(int x, int y){
	int tich = x * y;
	cout << "Tich = " << tich << endl;
	return;
}
//Ham tinh thuong
void tinhThuong(int x, int y){
	if(y == 0){
		cout << "Khong chia duoc" << endl;
		return;
	}
	double thuong = (double)x / y;
	cout << "Thuong = " << thuong << endl;
	return;
}
//Ham main
int main(){
	//Goi ham nhap
	int a = nhap();
	int b = nhap();
	//Goi ham
	tinhTong(a, b);
	tinhHieu(a, b);
	tinhTich(a, b);
	tinhThuong(a, b);
	return 0;
}
