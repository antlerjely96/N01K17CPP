/*
	5. Nhap so nguyen n tu ban phim.
	Tinh tong cac so chia het cho 3 hoac 7 trong khoang tu 1 den n
*/
#include <iostream>
using namespace std;
int main(){
	// khai
	int n,i,tong=0;
	//nhap
	cout << "nhap so: ";
	cin >> n;
	//tinh
	if ( n < 0){
	cout << "nhap sai" << endl;
	} else {
			for (i = 1; i <= n; i++){
				if (i % 3 == 0 || i % 7 == 0){
					tong += i;
			}
			
	}
	cout << "Tong cac so chia het cho 3 va 7: " << tong << endl;
    }
	return 0;
}
