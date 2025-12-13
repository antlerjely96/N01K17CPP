/*
	2. Nhap 3 so nguyen x, y, z. Tính
		a. x + y + z
		b. x * y * z
		c. x^2 + y^2 - z^2
		d. x^3 / y^2 * z
		e. x / y / z
		f. (x + y) - (x + z) - (y + z)
		g. (x * y) / (x + y + z)
		h. (x + y + z) / 3
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void A (int x, int y, int z){
	int A = x + y + z;
	cout << "x + y + z = " << A << endl;
	return;
}
void B (int x,int y, int z){
	int B = x * y * z;
	cout << "x * y * z = " << B << endl;
	return;
}
void C (int x, int y, int z){
	int C = x * x + y * y - z * z;
	cout << "x^2 + y^2 - z^2 = " << C << endl;
	return;
}
void D (int x, int y, int z){
	int D = x * x * x / y * y * z;
	cout << "x^3 / y^2 * z = " << D << endl;
	return;
}
void E (int x, int y, int z){
	if(y == 0 || z == 0){
		cout << "Khong chia duoc" << endl;
		return;
	}
	int E = x / y / z;
	cout << "x / y / z = " << E << endl;
	return;
}
void F (int x, int y, int z){
	int F = (x + y) - (x + z) - (y + z);
	cout << "(x + y) - (x + z) - (y + z) = " << F << endl;
	return;
}
void G (int x, int y, int z){
	int G = (x * y) / (x + y + z);
	cout << "(x * y) / (x + y + z) = " << G << endl;
	return; 
}
void H (int x, int y, int z){
	int H = (x + y + z) / 3;
	cout << "(x + y + z) / 3 = " << H << endl;
	return;
}
int main(){
	cout << "x = ";
	int x = nhap();
	cout << "y = ";
	int y = nhap();
	cout << "z = ";
	int z = nhap();


	A(x, y, z);
	B(x, y, z);
	C(x, y, z);
	D(x, y, z);
	E(x, y, z);
	F(x, y, z);
	G(x, y, z);
	H(x, y, z);
	return 0;
}
