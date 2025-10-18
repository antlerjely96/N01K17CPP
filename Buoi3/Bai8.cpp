/*
	8. Nhap 1 so nguyen. Hien thi nhu sau
	1 => Chu nhat
	2 => Thu hai
	3 => Thu ba
	...
	7 => Thu bay
*/
#include <iostream>
using namespace std;

int main() {
	//khai bao
	int a;
	//Nhap so
	cout << "a = ";
	cin >> a;
	//Kiem tra
	if (a == 1){
		cout << "Chu nhat" << endl;
	} else if (a == 2){
		cout << "thu hai" << endl;
	} else if (a == 3){
		cout << "thu ba" << endl;
	} else if (a == 4){
		cout << "thu tu" << endl;
	} else if (a == 5){
		cout << "thu nam" << endl;
	} else if (a == 6){
		cout << "thu sau" << endl;
	} else if (a == 7){
		cout << "thu bay" << endl;
	} else{
		cout << "khong co ngay nao" << endl;
	}
	return 0;
}
