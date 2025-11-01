/*
	7. In bang cuu chuong tu 2 -> 9
*/

#include <iostream>
using namespace std;

int main(){
	//In bang cuu chuong tu 2 den 9
	for(int i = 2; i <= 9; i++){
		//In ra bang cuu chuong cu the
		for(int j = 1; j <= 10; j++){
			cout << i << " x " << j << " = " << i * j << "\t";
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
