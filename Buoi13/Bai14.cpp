/*
	14. Nhap mang co n so nguyen.
	Hien thi cac phan tu co gia tri chan.
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

void hienthi (int n, int a[]){
	for (int i = 0; i < n; i++){
		if (a[i] % 2 == 0){
			cout << a[i] << "\t ";
		}
	}
	return;
} 

int main(){
	cout << "n = ";
	int n = nhap();
	int a[n];
	hienthi(n, a);
	return 0;
}
