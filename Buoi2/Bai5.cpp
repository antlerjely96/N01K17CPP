/*
	5. Nhap thang la 1 so nguyen. Hien thi so ngay trong thang do
*/
#include <iostream>
using namespace std;
int main (){
	//Khai bao bien
	int thang;
	//Nhap bien
	cout << "thang = ";
	cin >> thang;
	//Kiem tra
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		cout << "Thang 31 ngay "<< endl;
	} else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
		cout << "Thang 30 ngay " << endl;
	}else if (thang == 2){
		cout << "Thang 28 ngay " << endl;
	} else {
		cout << " khong co thang nay " << endl;
	}
	return 0;
}
