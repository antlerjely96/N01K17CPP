/*
	8. Nhap mang so nguyen co n phan tu.
	Tim phan tu co gia tri lon thu 2 trong mang
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int n, temp;
	//Nhap so phan tu
	cout << "Nhap so phan tu: ";
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	int max = a[0];
	cout << "Phan tu lon thu 2 trong mang: ";
	for(int i = 0; i < n; i++){
		if(a[i] < max){
			cout << a[i] << endl;
			break;
		}
	}
	return 0;
}
