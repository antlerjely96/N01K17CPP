/*
	2. Nhap 1 so nguyen.
	Kiem tra so nguyen do la so chan hay le
	Goi ý: a % 2 == 0
*/
#include <iostream>
using namespace std;
int main(){
	//Khai bao a
	int a;
	//Nhap a
	cout << "nhap a = ";
	cin >> a;
	//Kiem tra a chan hay le
	if (a % 2 == 0){
		cout << "a la so chan";
	} else {
		cout << "a la so le ";
	}
	return 0;
}
