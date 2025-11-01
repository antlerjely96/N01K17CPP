/*
	9. Nhap so nguyen n tu ban phim
	Hien thi cac so nguyen to trong khoang tu 1 den n
	Goi y: dùng nested loop de kiem tra i co phai so nguyen to khong
*/

#include <iostream>
using namespace std;

int main() {
	//Khai bao
	int n, dem;;
	//Nhap so nguyen
	cout << "Nhap so nguyen: ";
	cin >> n;
	cout << "Cac so nguyen to la: ";
	//Nested loop
	for (int i = 2; i <= n; i++) {
		dem = 0;
		for (int j = 2; j < i; j++) {
			//Kiem tra
			if (i % j == 0) {
				dem++;
			}
		}
		if (dem == 0) {
			cout << i << "\t";
		}
	}
	return 0;
}
