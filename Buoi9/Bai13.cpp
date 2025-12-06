/*
	13. Nhap mang so thuc co n phan tu.
	Nhap so nguyen k.
	Xoa phan tu co index = k khoi mang.
*/

#include<iostream>

using namespace std;

int main(){
	int n, k;
	do{
		cout << "nhap so luong phan tu: ";
		cin >> n;
	} while(n < 1);
	double a[n];
	for(int i = 0; i < n ;i++){
		cout<<"a[" << i << "] = " ;
		cin >> a[i];
	}
	cout << "mang ban dau: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	do{
		cout << "nhap vao vi tri can xoa: ";
		cin >> k;
	} while(k < 0 || k >= n);
	
	double a1[n - 1];
	for(int i = 0; i < k; i++){
		a1[i] = a[i];
	}
	for(int i = k; i < n; i++){
		a1[i] = a[i + 1];
	}

	cout << "mang sau khi xoa : ";
	for(int i = 0; i < n - 1; i++){
		cout << a1[i] << " ";
	}
	
}
