/*
	8. Nhap n. Tinh n!
*/
#include <iostream>
using namespace std;
int nhap(){
	int n;
	cin >> n;
	return n;
}
void kiemTra(int a){
	int giaiThua = 1;
	if(a < 0){
		cout << "khong co" << endl;
	} else {
		for(int i = 1; i <= a; i++){
			giaiThua = giaiThua * i;
		}
		cout << a << "! = " << giaiThua << endl;
	}
	return;
}

int main(){
	int a = nhap();
	kiemTra(a);
	return 0;
}
