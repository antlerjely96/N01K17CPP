/*
	11. Nhap so nguyen n. Tinh
	S = 1/1 + 1/2 + 1/3 + ... + 1/n
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void tinh(int n){
	double S = 0;
	for (int i = 1 ; i <= n; i++){
		S = S +  1.0 / i;
	}
	cout << "S = " << S << endl;
	return;
}
int main(){
	cout << "n = ";
	int n = nhap();
	tinh(n);
	return 0;
}
