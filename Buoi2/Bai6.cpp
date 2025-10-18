/*
	6. Nhap 3 so nguyen a, b, c.
	Hien thi so lon nhat va so nho nhat trong 3 so
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	int a;
	int b;
	int c;
	//Nhap a, b, c
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	//Tim max
	int max = a;
	//Kiem tra
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	//Hien thi max
	cout << "max = " << endl;
	//Tim min
	int min = a;
	//Kiem tra
	if(min > b){
		min = b;
	}
	if(min > c){
		min = c;
	}
	//Hien thi min
	cout << "min = " << endl;
	return 0;
}
