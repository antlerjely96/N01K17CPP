/*
	5. Nhap mang so thuc co n phan tu.
	Dem so phan tu co gia tri duong trong mang.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "nhap so phan tu: ";
	cin >> n;
	float arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr [" << i << "] =";
		cin arr[i];
	}
	
	int dem;
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			dem++;
		}
	}
	cout << "so phan tu co gia tri duong trong mang" << dem << endl;
	return 0;
}
