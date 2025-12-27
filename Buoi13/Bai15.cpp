/*
	15. Nhap mang so thuc co n phan tu, n nhap tu ban phim.
	Tinh tong gia tri cua cac phan tu trong mang.
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

int tinhTong (int n, float a[]){
	float tong = 0;
	for (int i = 0; i < n; i++){
		tong += a[i];
	}
	return tong;
}
int main(){
	cout << "n = ";
	int n = nhap();
	float a[n];
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Tong = " << tinhTong (n, a) << endl;
	return 0;
}

