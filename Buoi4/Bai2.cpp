/*
	2. Nhap so nguyen n tu ban phim.
	Hien thi cac so tu 1 den n
*/
#include <iostream>
using namespace std;
int main(){
	//Khai bao i, n
	int i;
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Vong lap in ra i
	for(i = 1; i <= n; i++){
		cout << i << endl;
	} 
	return 0;
}
