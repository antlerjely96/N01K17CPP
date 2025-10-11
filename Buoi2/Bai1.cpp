/* 
	1. Nhap 1 so nguyen, kiem tra so nguyen do la am hay duong.
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	int a;
	//Nhap so nguyen
	cout << "a = ";
	cin >> a;
	//Kiem tra so nguyen la am hay duong
	if(a > 0){
		cout << "a la so nguyen duong" << endl;
	} else if(a < 0){
		cout << "a la so nguyen am" << endl;
	} else {
		cout << "a la so nguyen khong am khong duong" << endl;
	}
	return 0;
}
