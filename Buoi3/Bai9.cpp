/*
	9. Nhap 1 so nguyen tu ban phim
	Kiem tra so nguyen do la so am hay so duong
	Neu la so duong thi kiem tra la so chan hay le
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int a;
	//Nhap bien
	cout << "a = ";
	cin >> a;
	//Kiem tra
	if(a > 0){
		cout << "a la so duong" << endl;
		if(a % 2 == 0){
			cout << "a la so chan" << endl;
		} else {
			cout << "a la so le" << endl;
		}
	} else if(a < 0){
		cout << "a la so am" << endl;
	} else {
		cout << "a la so khong am khong duong" << endl;
	}
	return 0;
}
