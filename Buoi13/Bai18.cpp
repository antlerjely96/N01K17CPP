/*
	18. Nhap mang so nguyen co n phan tu.
	Nhap so nguyen x tu ban phim.
	Dem so lan x xuat hien trong mang
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

int soLanXuatHien(int x, int n, int arr[]){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			dem++;
		}
	}
	return dem;
}

int main(){
	cout << "n = ";
	int n = nhap();
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		arr[i] = nhap();
	}
	cout << "x = ";
	int x = nhap();
	cout << "So lan xuat hien cua x trong mang: " << soLanXuatHien(x, n, arr) << endl;
	return 0;
}
