/*
	16. Nhap mang so nguyen co n phan tu, n nhap tu ban phim
	Tinh tich cac phan tu co gia tri chia het cho 5 hoac 7 trong mang
*/
#include <iostream>
using namespace std;
int nhap (){
	int n;
	cin >> n;
	return n;
}
void tinhTichGT (int n, int arr[]){
	int tich = 1;
	for (int i = 0; i < n; i++){
		if(arr[i] % 5 == 0 || arr[i] % 7 == 0){
			tich *= arr[i];
		}
	}
	cout << tich << endl;
	return ;
}
int main (){
	cout << "n = ";
	int n = nhap();
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] =";
		cin >> arr[i];
	}
	tinhTichGT(n, arr);
	
	return 0;
}
