/*
	10. Nhap thang. Hien thi so ngay trong thang do
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao thang
	int thang;
	//Nhap thang
	cout << "Nhap thang: ";
	cin >> thang;
	//Kiem tra
	cout << "if - else" << endl;
	if(thang == 1){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else if(thang == 2){
		cout << "Thang " << thang << " co 28 hoac 29 ngay" << endl;
	} else if(thang == 3){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else if(thang == 4){
		cout << "Thang " << thang << " co 30 ngay" << endl;
	} else if(thang == 5){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else if(thang == 6){
		cout << "Thang " << thang << " co 30 ngay" << endl;
	} else if(thang == 7){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else if(thang == 8){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else if(thang == 9){
		cout << "Thang " << thang << " co 30 ngay" << endl;
	} else if(thang == 10){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else if(thang == 11){
		cout << "Thang " << thang << " co 30 ngay" << endl;
	} else if(thang == 12){
		cout << "Thang " << thang << " co 31 ngay" << endl;
	} else {
		cout << "Thang khong ton tai" << endl;
	}
	
	//Cau truc lua chon switch - case
	cout << "switch - case" << endl;
	switch(thang){
		case 1:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 2:
			cout << "Thang " << thang << " co 28 hoac 29 ngay" << endl;
			break;
		case 3:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 4:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 5:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 6:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 7:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 8:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 9:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 10:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 11:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 12:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		default:
			cout << "Thang khong ton tai" << endl;
			break;
	}
	return 0;
}
