/*
	8. Nhap mang so thuc co n phan tu.
	Sap xep mang theo chieu tang dan.
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao phan tu
	int n;
	//Nhap so phan tu
	cout << "Nhap so phan tu: ";
	cin >> n;
	//Khai bao mang
	double arr[n], temp;
	for(int i = 0; i < n; i++) {
		cout << "arr[ " << i << "] = ";
		cin >> arr[i];
	}
	for(int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++){
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Mang sap xep theo chieu tang dan la: " << endl;
	for(int i = 0; i < n; i++) {
		cout << arr[i] << "\t;
	}
	return 0;
}
