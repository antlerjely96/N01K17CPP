/*
	1. In ra cac so tu 1 den 50.
*/

#include <iostream>
using namespace std;

int main(){
	//V�ng lap for
	int i;
	cout << "-- for --" << endl;
	for(i = 1; i <= 50; i++){
		cout << i << endl;
	}
	//V�ng lap while
	cout << "-- while --" << endl;
	i = 1;
	while(i <= 50){
		cout << i << endl;
		i++;
	}
	//V�ng lap do - while
	cout << "-- do - while --" << endl;
	i = 1;
	do {
		cout << i << endl;
		i++;
	} while(i <= 50);
	return 0;
}
