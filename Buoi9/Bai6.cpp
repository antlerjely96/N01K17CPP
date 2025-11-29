/*
	6. Nhap mang so nguyen co n phan tu.
	Nhap so nguyen x tu ban phim.
	Dem so lan x xuat hien trong mang
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao phan tu
	int n;
	//Nhap so phan tu
	cout << "Nhap so phan tu: ";
	cin >> n;
	//Khai bao mang phan tu
	int arr[n];
	cout << "Nhap " << n << " phan tu trong mang la: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//Khai bao so nguyen x
	int x;
	//Nhap so nguyen x
	cout << "Nhap so nguyen x: ";
	cin >> x;
	int Dem = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			Dem++;
		}
	}
	cout << "So lan x xuat hien trong mang la: " << Dem << endl;
	return 0;
}
