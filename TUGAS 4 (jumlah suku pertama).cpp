#include <iostream>
using namespace std;

int main(){

 int a,b,n,barisan,deret;
 
 cout <<"masukan suku pertama =";
 cin >> a;
 
 cout <<"masukan beda suku =";
 cin >> b;
 
 cout <<"masukan suku ke n =";
 cin >> n;
 
 barisan=a+(n-1)*b;
 deret=(2*a+(n-1)*b)*n/2;
 cout <<"barisan aritmatika = "<<barisan<<endl;
 cout <<"deret aritmatika ="<<deret;
 
 
}
