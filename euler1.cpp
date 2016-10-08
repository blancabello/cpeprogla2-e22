#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int num = 0, sum = 0;
	int x;
	
	f>>num;
	
	for (x = 3; x < num; x++){
		if ( x % 3 == 0  ||  x % 5 == 0 ){	
			sum += x;	
		}
	}
	
	cout << sum << endl;
	
	system ("pause > 0");
}
