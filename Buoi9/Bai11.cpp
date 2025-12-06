/*
	11. Nhap mang so nguyen co n phan tu.
	Nhap 2 so nguyen m, k.
	Chen gia tri m vao vi tri co index = k trong mang
*/

#include <iostream>
using namespace std;

int main(){
	int n, k, m;
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if(n < 1){
			cout << "So phan tu phai >= 1!" << endl;
		}
	} while (n < 1);
	int a[n];
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Mang truoc khi chen: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	do {
		cout << "Nhap vi tri can chen: ";
		cin >> k;
	} while (k < 0 || k > n);
	cout << "Nhap gia tri can chen: ";
	cin >> m;
	int a1[n + 1];
	for(int i = 0; i < k; i++){
		a1[i] = a[i];
	}
	a1[k] = m;
	for(int i = k; i < n + 1; i++){
		a1[i + 1] = a[i];
	}
	cout << "Mang sau khi chen: ";
	for(int i = 0; i < n + 1; i++){
		cout << a1[i] << " ";
	}
	return 0;
}
