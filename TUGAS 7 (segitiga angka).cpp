#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
int n;

cout << "masukan nilai: "; cin >> n;

for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
cout << j << " ";
}
cout << endl;

}	

for(int i=5; i>0; i--){
for(int j=i; j>0; j--){
cout << j << " ";
}
cout << endl;

}	

}
