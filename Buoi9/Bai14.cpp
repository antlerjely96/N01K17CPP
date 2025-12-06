/*
	14. Nhap 2 mang so thuc.
	Mang1 co n phan tu, Mang2 co m phan tu.
	Gop 2 mang lai thanh 1
*/
#include <iostream>
using namespace std;

int main (){
	int n, m;
	cout << "nhap mang 1 :";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cout << "nhap phan tu: ";
		cin >> a[i];
	}	
	cout << "nhap mang 2: ";
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++){
		cout << "nhap phan tu :";
		cin >> b[i];
	}
	int c[n + m];
	for (int i = 0; i < n; i++){
		c[i] = a[i];
	}
	for (int i = 0; i < m; i++){
		c[n + i] = b[i];
	}
	cout << "mang khi gop : ";
	for (int i = 0; i < n + m; i++){
		cout << c[i] << " ";
	}
	return 0;
}
