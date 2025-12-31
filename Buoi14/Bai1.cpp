/*
	1. Nhap thong tin cua 5 hoc sinh.
	Thong tin cua 1 hoc sinh se bao gom: id, name, gender, birthday
*/

#include <iostream>
#include <cstring>
using namespace std;

//Khai bao struct
struct HocSinh{
	string id;
	string name;
	string gender;
	string birthDay;
};

int main(){
	//Khai bao 1 bien co kieu du lieu la struct
	HocSinh hocSinh1;
	//Khai bao mang co kieu du lieu la struct
	HocSinh hocSinh[5];
	//Nhap gia tri cho cac phan tu cua mang struct
	for(int i = 0; i < 2; i++){
		cout << "Nhap thong tin cho hoc sinh thu: " << i + 1 << endl;
		cout << "Id: ";
		cin >> hocSinh[i].id;
		cout << "Name: ";
		cin.ignore();
		getline(cin, hocSinh[i].name);
		cout << "Gender: ";
		cin >> hocSinh[i].gender;
		cout << "BirthDay: ";
		cin >> hocSinh[i].birthDay;
	}
	//Hien thi gia tri cua cac phan tu
	cout << "Hien thi thong tin vua nhap!" << endl;
	for(int i = 0; i < 2; i++){
		cout << "Thong tin cua hoc sinh " << i + 1 << endl;
		cout << "Id: " << hocSinh[i].id << endl;
		cout << "Name: " << hocSinh[i].name << endl;
		cout << "Gender: " << hocSinh[i].gender << endl;
		cout << "Birthday: " << hocSinh[i].birthDay << endl;
	}
}
