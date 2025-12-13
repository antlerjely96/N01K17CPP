/* 
	15. Nhap mang so nguyen co n phan tu.
	Loai bo cac phan tu co gia tri trung nhau trong mang
*/

#include <iostream>
using namespace std;

int main(){
	//Nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Nhap mang
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//
	int k = 0, count, temp;
	int arr1[n];
	for(int i = 0; i < n; i++){
		count = 0;
		temp = arr[i];
		for(int j = i + 1; j < n; j++){
			if(arr[i] == arr[j]){
				break;
			}
		}
		for(int m = 0; m < k; m++){
			if(temp == arr1[m]){
				count++;
			}
		}
		if(count == 0){
			arr1[k] = arr[i];
			k++;
		}
	}
	//Hien thi
	for(int i = 0; i < k; i++){
		cout << arr1[i] << "\t";
	}
	return 0;
}
