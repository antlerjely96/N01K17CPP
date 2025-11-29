/*
	7. Nhap mang so thuc co n phan tu.
	Tim max, min
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int n;
	//Nhap so phan tu
	cout << "Nhap so phan tu: ";
	cin >> n;
	float arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] =";
		cin >> arr[i];
	} 
    float max = arr[0];
	for (int i = 0;i < n;i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}		
	cout << "max = " << max << endl;
	float min = arr[0];
	for (int i = 0;i < n;i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	cout << "min = " <<min << endl;
	return 0;
}
		
