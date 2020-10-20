#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main ()
{
	int menu;
	int s1,s2,s3,keliling;
	float a,t,c,l,k;
	cout <<"MENGHITUNG SEGITIGA SIKU-SIKU"<< endl;
	cout <<"********************************"<< endl;
	cout <<"1. Hitung Panjang Sisi Miring"<< endl;
	cout <<"2. Hitung Luas Segitiga"<< endl;
	cout <<"3. Hitung Keliling"<< endl;
	cout <<"4. Keluar Program"<< endl;
	cout <<"---------------------------------"<<endl;
	cout <<"Pilih Menu : ";
	cin >> menu;
	
	 if(menu == 1){
	 	cout <<" Masukkan alas segitiga : ";
		 cin >> a;
		 cout <<" Masukkan tinggi segitiga : ";
		 cin >> t;
		 c = sqrt((a*a)+(t*t));
		 cout <<" ---------------------------" <<endl;
		 cout <<" Panjang Sisi Miring adalah : " << c <<endl;
		 getch();
}
if(menu == 2){
	cout << "Masukkan panjang alas: ";
	cin >> a;
	cout << "Masukkan tinggi segitiga: ";
	cin >> t;

  l = 0.5*a*t;
  cout << "Luas Segitiga adalah " << l << endl;
}
if(menu == 3){
	cout<<"Masukkan sisi 1 segitiga: ";
	cin>>s1;
	cout<<"Masukkan sisi 2 segitiga: ";
	cin>>s2;
	cout<<"Masukkan sisi 3 segitiga: ";
	cin>>s3;
	
	keliling=s1+s2+s3;
	cout<<"Keliling Segitiga adalah "<<keliling<<endl;
}
if(menu == 4){
	cout<<"Tekan sembarang huruf/angka untuk keluar program"<<endl;
}
cout<<"**************************************************"<< endl;
cout<<" _______________________________________"<<endl;
cout<<"|__By.__________________________________|"<<endl;
cout<<"|_______Nama : Dion Tambunan____________|"<<endl;
cout<<"|_______NIM : 20051397056_______________|"<<endl;
cout<<"|_______Kelas : 2020B___________________|"<<endl;
cout<<"|_______________________________________|"<<endl;
return 0;
}
