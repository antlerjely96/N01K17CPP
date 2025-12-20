/*
	9. Nhap so nguyen n tu ban phim. Tinh tong cac so tu 1 den n
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void tinhTong(int a){
	int tong = 0;
	for(int i = 1; i <= a; i++){
		tong = tong + i;
	}
	cout << "Tong cac so tu 1 den N la: " << tong << endl;
}
int main(){
	cout << "a = ";
	int a = nhap();
	tinhTong(a);
	return 0;
}
