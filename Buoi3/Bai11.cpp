/*
	11. Nhap 3 so thuc a, b, c.
	Kiem tra 3 so do co tao thanh tam giac khong.
	Goi y: dieu kien de tao thanh tam giac: tong 2 canh > canh con lai
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao 3 bien
	double a;
	double b;
	double c;
	//Nhap 3 bien
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	//Kiem tra
	if(a > 0 && b > 0 && c > 0){
		if(a + b > c && a + c > b && b + c > a){
			cout << "a, b, c la 3 canh tam giac" << endl;
		} else {
			cout << "a, b, c khong la 3 canh tam giac" << endl;
		}
	} else {
		cout << "a, b, c khong phai canh tam giac" << endl;
	}
	return 0;
}
