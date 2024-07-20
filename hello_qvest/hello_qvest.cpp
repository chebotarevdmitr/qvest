#include <iostream>
using namespace std;

void Swap (int& x,int& y){
	int tmp =x;
	x=y;
	y=tmp;
}

int main() {
	int a=1;
	int b=2;
  Swap(a,b) ;

 cout<< "a== "<<a<<"\n";
 cout<< "b== "<<b<<"\n";
 
   system("pause>0") ;
    return 0;
}



