/*
	10. Nhap so nguyen n tu ban phim
	a. Kiem tra n co phai so nguyen to hay khong
	b. Hien thi cac so nguyen to trong khoang tu 1 den n.
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
int kiemTraSoNguyenTo(int a){
	int dem = 0;
	if (a < 2){
		cout << "khong phai la so nguyen to" << endl;
	} else {
		for(int i = 2; i < a; i++){
			if(a % i == 0){
				dem++;
			}
		}
	}
	return dem;
}
void hienThiSoNguyenTo(int b){
	if(kiemTraSoNguyenTo(b) == 0){
		cout << b << " la so nguyen to" << endl;
	} else {
		cout << b << " khong la so nguyen to" << endl;
	}
	cout << "So tu 1 den n: ";
	for(int i = 2; i <= b; i++){
		if(kiemTraSoNguyenTo(i) == 0){
			cout << i << "\t";
		}
    }
	return;
}
int main (){
	cout << " a = ";
	int a = nhap();
	hienThiSoNguyenTo(a);
	return 0;
}
