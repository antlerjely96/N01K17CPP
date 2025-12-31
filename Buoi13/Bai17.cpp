/*
	17. Nhap mang so thuc co n phan tu.
	Dem so phan tu co gia tri duong trong mang.
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

int demSoPhanTuDuong(int n, double arr[]){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			dem++;
		}
	}
	return dem;
}

int main(){
	cout << "n = ";
	int n = nhap();
	double arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "So phan tu duong trong mang: " << demSoPhanTuDuong(n, arr) << endl;
	return 0;
}
