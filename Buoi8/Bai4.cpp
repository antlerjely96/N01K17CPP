/*
	4. Nhap mang so nguyen co n phan tu, n nhap tu ban phim
	Tinh tich cac phan tu co gia tri chia het cho 5 hoac 7 trong mang
*/
#include <iostream>
using namespace std;
int main (){
	 int n;
	 cout <<" Nhap cac phan tu: ";
	 cin >> n;
	 int Tich = 1;
	 int arr[n];
	 for (int i = 0; i < n; i++){
	 	cout <<" arr[" << i << "] = ";
	 	cin >> arr[i];
	 }
	 for (int i = 0; i < n; i++){
	 	if ( arr[i] % 5 == 0 || arr[i] % 7 == 0){
	 		Tich *= arr[i];
		 }
	}
	cout << Tich << endl;	 
	return 0;
}
