/*
	7. Nhap so nguyen n tu ban phim
	Kiem tra n co phai so nguyen to hay khong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao
	int n, dem = 0;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Kiem tra
	if(n < 2){
		cout << n << " khong la so nguyen to" << endl;
	} else {
		//Vong lap
		for(int i = 2; i < n; i++){
			//Kiem tra n co chia het cho i khong
			if(n % i == 0){
				dem++;
			}
		}
		//Kiem tra dem
		if(dem == 0){
			cout << n << " la so nguyen to" << endl;
		} else {
			cout << n << " khong la so nguyen to" << endl;
		}
	}
	return 0;
}
