/*
	16. Nhap mang so nguyen co n phan tu.
	Tach mang tren thanh 2 mang:
		- 1 mang chua cac so nguyen to
		- 1 mang chua cac so khong phai so nguyen to
*/

#include<iostream>
using namespace std;

int main(){
	//Nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Nhap mang
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Dem so phan tu cua 2 mang con
	int soSoNguyenTo = 0, soSoKhongNguyenTo = 0, count, k = 0, m = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] < 2){
			soSoKhongNguyenTo++;
		} else {
			count = 0;
			for(int j = 2; j < arr[i]; j++){
				if(arr[i] % j == 0){
					count++;
				}
			}
			if(count == 0){
				soSoNguyenTo++;
			} else {
				soSoKhongNguyenTo++;
			}
		}
	}
	//Tao 2 mang con
	int mangNguyenTo[soSoNguyenTo], mangSoKhongNguyenTo[soSoKhongNguyenTo];
	for(int i = 0; i < n; i++){
		if(arr[i] < 2){
			mangSoKhongNguyenTo[m] = arr[i];
			m++;
		} else {
			count = 0;
			for(int j = 2; j < arr[i]; j++){
				if(arr[i] % j == 0){
					count++;
				}
			}
			if(count == 0){
				mangNguyenTo[k] = arr[i];
				k++;
			} else {
				mangSoKhongNguyenTo[m] = arr[i];
				m++;
			}
		}
	}
	//In
	cout << "Mang so nguyen to: ";
	for(int i = 0; i < soSoNguyenTo; i++){
		cout << mangNguyenTo[i] << "\t";
	}
	cout << endl;
	cout << "Mang so khong nguyen to: ";
	for(int i = 0; i < soSoKhongNguyenTo; i++){
		cout << mangSoKhongNguyenTo[i] << "\t";
	}
	cout << endl;
	return 0;
}
