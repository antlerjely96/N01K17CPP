/*
	Hien thi menu sau:
	1. Nhap 2 canh cua hinh chu nhat
	Tinh chu vi, dien tich hinh chu nhat
	2. Nhap canh cua hinh vuong.
	Tinh chu vi, dien tich hinh vuong
	3. Nhap ban kinh cua hinh tron
	Tinh chu vi, dien tich hinh tron
	Chon:
	Khi nhap so tu 1 den 3 thi se thuc hien menu tuong ung
*/

#include <iostream>
using namespace std;
	
int main() {
	//Hien thi menu
	cout << "--MENU--" << endl;
	cout << "1. Nhap 2 canh cua hinh chu nhat. Tinh chu vi, dien tich hinh chu nhat" << endl;
	cout << "2. Nhap canh cua hinh vuong. Tinh chu vi, dien tich hinh vuong" << endl;
	cout << "3. Nhap ban kinh cua hinh tron. Tinh chu vi, dien tich hinh tron" << endl;
	cout << "Chon: ";
	//Khai bao bien
	int choice;
	//Nhap lua chon
	cin >> choice;
	//Kiem tra choice
	if(choice == 1){
		//Thuc hien 1.
		//Khai bao chieuDai, chieuRong
		float chieuDai;
		float chieuRong;
		//Nhap chieuDai, chieuRong
		cout << "Chieu dai: ";
		cin >> chieuDai;
		cout << "Chieu Rong: ";
		cin >> chieuRong;
		//Khai bao chuViHCN, dienTichHCN
		float chuViHCN;
		float dienTichHCN;
		//Tinh chu vi, dien tich
		chuViHCN = (chieuDai + chieuRong) * 2;
		dienTichHCN = chieuDai * chieuRong;
		//Hien thi ket qua
		cout << "Chu vi HCN: " << chuViHCN << endl;
		cout << "Dien tich HCN: " << dienTichHCN << endl; 
	} else if(choice == 2){
		//Thuc hien 2.
		//Khai bao canh
		float canh;
		//Nhap canh
		cout << "Canh: ";
		cin >> canh;
		//Khai bao chu vi, dien tich
		float chuViHV;
		float dienTichHV;
		//Tinh chu vi, dien tich
		chuViHV = canh * 4;
		dienTichHV = canh * canh;
		//Hien thi ket qua
		cout << "Chu vi HV: " << chuViHV << endl;
		cout << "Dien tich HV: " << dienTichHV << endl;
	} else if(choice == 3){
		//Thuc hien 3.
		//Khai bao ban kinh
		float banKinh;
		//Nhap ban kinh
		cout << "Ban kinh: ";
		cin >> banKinh;
		//Khai bao chu vi, dien tich
		float chuViHT;
		float dienTichHT;
		//Tinh chu vi, dien tich
		chuViHT = banKinh * 2 * 3.14;
		dienTichHT = banKinh * banKinh * 3.14;
		//Hien thi ket qua
		cout << "Chu vi HT: " << chuViHT << endl;
		cout << "Dien tich HT: " << dienTichHT << endl;
	} else {
		cout << "Khong ton tai lua chon" << endl;
	}
	return 0;
}
