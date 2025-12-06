/*
	12. Nhap mang so nguyen co n phan tu.
	Hien thi tat ca cac phan tu la so nguyen to trong mang
*/
#include <iostream>
using namespace std;

int main(){
	// khai bao bien
	int n;
	cout <<"Nhap so phan tu: ";
	cin >> n;
	// khai bao mang
	int arr[n];
	cout <<"Nhap " << n << " phan tu n: \n";
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	} 
	//kiem tra
	cout <<"Cac so nguyen to trong mang: ";
	for(int i = 0; i < n; i++){
		int demUoc = 0;
		for(int j = 1; j <= arr[i]; j++){
			if(arr[i] % j == 0){
				demUoc++;
			}
		}
		cout << demUoc << endl;
		if(demUoc == 2){
			cout << arr[i] <<" ";
		}
	}
	return 0;
}
