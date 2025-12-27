/* 
	13. Nhap mang co n so nguyen tu ban phim. Hien thi n so do
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

//Ham co 1 mang lam tham so: ten_mang[]
void hienThi(int n, int arr[]){
	for(int i = 0; i < n; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	return;
}

int main(){
	cout << "n = ";
	int n = nhap();
	int arr[n];
	//Nhap mang phai viet trong main do ham khong the return 1 mang
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		arr[i] = nhap();
	}
	//Goi ham, truyen mang vao lam doi so: ten_mang
	hienThi(n, arr);
	return 0;
}
