#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int arr[]={1,2,4,3};
    int x=0;
	  int a, b ,i;
	
    ifstream f("input.txt");
    f >> a >> b;
    for(i=a;i<=b;i++){
      cout << i-- <<" ";
           i+=arr[(x%4)];  
      x++;
    }
    return 0;
}
