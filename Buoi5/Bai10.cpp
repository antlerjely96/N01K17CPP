/*
	10. Ve hinh
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	Goi y: dung nested loop: i: 1 -> 5, j: 1 -> 5
*/

#include<iostream>
using namespace std;

int main(){
	//Vong lap hang
	for (int i = 1; i <= 5; i++) {
		//Vong lap cot
		for (int j = 1; j <= 5; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
