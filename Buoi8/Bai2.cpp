/*
	2. Nhap mang co 10 so nguyen.
	Hien thi cac phan tu co gia tri chan
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao mang so nguyen co 10 phan tu
	int arr[10];
	//Nhap gia tri cac phan tu cua mang
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Hien thi cac phan tu co gia tri chan
	for(int i = 0; i < 10; i++){
		if(arr[i] % 2 == 0){
			cout << arr[i] << "\t";
		}
	}
	cout << endl;
	return 0;
}
