/* 1. Nhap 10 so nguyen tu ban phim. Hien thi 10 so do
		10 so nguyen
		=> 1 tap hop gom 10 gia tri nguyen
		=> 1 mang co 10 phan tu co kieu du lieu nguyen
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao mang so nguyen co 10 phan tu
	int arr[10];
	//Nhap lan luot gia tri cho cac phan tu
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i <<"] = ";
		cin >> arr[i];
	}
	//Hien thi gia tri cac phan tu
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}
