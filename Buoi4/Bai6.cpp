/*
	6. Nhap so nguyen n tu ban phim.
	Tinh tong cac chu so cua n
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int n, tong = 0, chuSo;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Tinh tong cac chu so cua n
	while(n != 0){
		//Tach lay chu so hang don vi
		chuSo = n % 10;
		n /= 10;
		tong += chuSo;
	}
	//In ra ket qua
	cout << "Tong cac chu so cua n: " << tong << endl;
	return 0;
}
