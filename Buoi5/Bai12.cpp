/*
	12. Ve hinh
	*
	* *
	* * *
	* * * *
	* * * * *
*/
#include <iostream>
using namespace std;
int main(){
	for (int i = 1; i <= 5; i++){
	    for (int f = 1; f <= 5; f++){
			if (f <= i){
				cout << " * ";
			} else {
				cout << " ";
			}
		}
		cout << endl;	
	}
   	return 0;
}
