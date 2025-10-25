/*
	4. Nhap so nguyen n tu ban phim.
	Tinh n!
*/
#include <iostream>
using namespace std;

int main (){
	//Khai bao
	long int giaiThua = 1;
	int i, n;
	//Nhap 
	cout << "Nhap so nguyen n:";
	cin >> n;
	//Kiem tra
    if (n < 0){
    	cout << "Giai thua khong chua so am";
	}
	else {
		for(i = 1; i <= n; i++){
		giaiThua = giaiThua * i;
	}
		cout << giaiThua << endl;
	}
	return 0;
}
