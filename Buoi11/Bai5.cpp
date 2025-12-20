/*
	5. Nhap 1 so nguyen.
	Kiem tra so nguyen do la so chan hay le
	Goi ý: a % 2 == 0
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;	
}

void kiemtra(int a){
	if ( a % 2 == 0){
	cout << " So Chan "; 		
}else {
	cout << " So Le ";
	return;
	}
}
int main(){
	int a =nhap();
	
	kiemtra( a );
	return 0;
}


