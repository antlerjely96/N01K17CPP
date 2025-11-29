/*
	10. Nhap mang co n so nguyen.
	Tach mang tren thanh 2 mang rieng biet:
		- 1 mang chua cac phan tu co gia tri chan
		- 1 mang chua cac phan tu co gia tri le
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao phan tu
	int n, temp, j = 0, k = 0;
	//Nhap so phan tu
	cout << "Nhap so phan tu: ";
	cin >> n;
	//Khai bao va nhap mang
	int a[n], soSoChan = 0, soSoLe = 0;
	for(int i = 0; i < n; i++) {
		cout << "arr[" << i << "] = ";
		cin >> a[i];
		if(a[i] % 2 == 0){
			soSoChan++;
		} else {
			soSoLe++;
		}
	}
	int mangSoChan[soSoChan], mangSoLe[soSoLe];
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			mangSoChan[j] = a[i];
			j++;
		} else {
			mangSoLe[k] = a[i];
			k++;
		}
	}
	cout << "Mang chua cac gia tri chan la: ";
	for (int i = 0; i < soSoChan; i++) {
		cout << mangSoChan[i] << "\t";
	}
	cout << endl;
	cout << "Mang chua cac gia tri le la: ";
	for (int i = 0; i < soSoLe; i++) {
		cout << mangSoLe[i] << "\t";
	}
	cout << endl;
	return 0;
}
