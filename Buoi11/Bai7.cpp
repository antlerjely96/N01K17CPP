/*
	7. Nhap 3 so nguyen a, b, c.
	Hien thi so lon nhat va so nho nhat trong 3 so
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void kiemTra(int a, int b, int c){
	int max = a;
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	int min = a;
	if (min > b){
		min = b;
	}
	if (min > c){
		min = c;
	}
	cout << "max la:" << max << endl;
	cout << "min la:" << min << endl;
	return;
}
int main(){
	int a = nhap();
	int b = nhap();
	int c = nhap();
	kiemTra(a, b, c);
	return 0;
}
