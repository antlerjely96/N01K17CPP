/*
	12. Nhap 2 so nguyen tu ban phim.
	Tim uoc chung lon nhat va boi chung nho nhat cua 2 so
*/
#include <iostream>
using namespace std;
int nhap (){
	int n;
	cin >> n;
	return n;
}
int TimUCLN (int a,int b){
	while(b != 0){
		int du = a % b;
		a = b;
		b = du;
	}
	return a;
}
int TimBCNN (int a, int b, int ucln){
	return (a * b) / ucln;
}
int main (){
	cout << "nhap a :";
	int a = nhap();
	cout << "nhap b :";
	int b = nhap();
	int ucln = TimUCLN (a, b);
	int BCNN = TimBCNN (a, b, ucln);
	cout << "UCLN la: " << ucln << endl;
	cout << "BCNN la: " << BCNN << endl;
	return 0;
}
