/*
	3. Nhap 2 so a va b.
	Tinh chu vi, dien tich cua hinh chu nhat có canh a va b
*/
#include <iostream>
using namespace std;
//nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}

void tinhChuVi(int a, int b){
	int ChuVi = 2 * (a + b);
	cout << "chu vi la: " << ChuVi << endl;
	return;	
}

void tinhDienTich(int a, int b){
	int DienTich = a * b;
	cout << "dien tich la: " << DienTich << endl;
	return;
}
int main(){
	int a = nhap();
	int b = nhap();
	
	tinhChuVi(a,b);
	tinhDienTich(a,b);
	return 0;
}
