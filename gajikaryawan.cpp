#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main ()
{  
    char nama[35];
    char gol[1];
    int gaji, lembur, jam, glembur;
    glembur=4000;
  
    cout << "Masukan Nama Karyawan : ";
    gets(nama);
    cout << "Masukan Golongan [A/B/C/D] : ";
    cin >> gol;
    if (strcmp(gol,"A")==0){
        gaji = 5000;
    }  
    else if (strcmp(gol,"B")==0){
        gaji = 7000;
    }
    else if (strcmp(gol,"C")==0){
        gaji = 8000;
    }
    else if (strcmp(gol,"D")==0){
        gaji = 10000;
    }
    else {
        cout << "Pilihan tidak ada!!";
    }

    cout << "Jumlah Jam Kerja : ";
    cin >> jam;
  
    if (jam<=48){
        cout << "Halo, " << nama << ". Anda mendapatkan gaji sebesar " << gaji*jam;
    }
    else {
        lembur = jam - 48;
        cout << "Halo, " << nama << ". Anda mendapatkan gaji sebesar " << 48*gaji+lembur*glembur<<endl;
    }
    cout<<"**************************************************"<< endl;
cout<<" _______________________________________"<<endl;
cout<<"|__By.__________________________________|"<<endl;
cout<<"|_______Nama : Dion Tambunan____________|"<<endl;
cout<<"|_______NIM : 20051397056_______________|"<<endl;
cout<<"|_______Kelas : 2020B___________________|"<<endl;
cout<<"|_______________________________________|"<<endl;
}
