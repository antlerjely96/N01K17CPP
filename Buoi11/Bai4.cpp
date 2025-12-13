/* 
	4. Nhap 1 so nguyen, kiem tra so nguyen do la am hay duong.
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void kiemTra(int a){
	if(a < 0){
		cout << a << " la so am" << endl;
	} else if(a > 0){
		cout << a << " la so duong" << endl;
	} else {
		cout << a << " la so khong am khong duong" << endl;
	}
	return;
}
int main(){
	int a = nhap();
	kiemTra(a);
}
