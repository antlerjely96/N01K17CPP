/*
	3. Nhap so nguyen n tu ban phim.
	Hien thi cac so chan trong khoang tu 1 den n
*/

#include <iostream>
using namespace std;

int main() {
	//khai bao bien
	int n;
	cout << "Nhap mot so: \n";
	cin >> n;
	
	//In so chan
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			cout << i << "\n";
		}
	}
	
	return 0;
}
