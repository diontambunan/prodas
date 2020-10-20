//Program Billing Warnet
#include <iostream>
using namespace std;
struct billing
{
char nama[30];
};
int main ()
{
billing bling;
int menit;int jam;int detik;int w;
int jmlW;
int jmlJ;
int jmlM;
int jmlD;
cout<<"|------------------------------------|"<<endl;
cout<<"|          Welcome to Dion NET       |"<<endl;
cout<<"|------------------------------------|"<<endl;
cout<<"Tarif Rp 5.000,- per jam"<<endl;
cout<<"Masukkan Nama Anda : ";cin.getline(bling.nama,30);
cout<<"=========================="<<endl;
cout<<"Lama Main \n";
cout<<"Masukkan Jam : ";cin>>jam;
cout<<"Masukkan Menit : ";cin>>menit;
cout<<"Masukkan Detik : ";cin>>detik;
jmlJ=(jam*120*41.66666666666667);
jmlM=(menit*100);
jmlD=(detik*41.66666666666667)/30;
jmlW=jmlJ+jmlM+jmlD;
cout << "Halo, " << bling.nama << ". Terimakasih sudah hadir di warnet kami."<< endl;
cout <<"Total Pembayaran Anda : Rp."<<jmlW<<",-"<<endl;

cout<<endl;
cout<<"|-------------------------------------------------|"<< endl;
cout<<"|================< TERIMA KASIH >=================|"<< endl;
cout<<"|=====< KAMI TUNGGU KEDATANGAN ANDA KEMBALI >=====|"<< endl;
cout<<"|-------------------------------------------------|\n \n"<< endl;
cout<<"**************************************************\n"<< endl;
cout<<" _______________________________________\n";
cout<<"|__By.__________________________________|\n";
cout<<"|_______Nama : Dion Tambunan____________|\n";
cout<<"|_______NIM : 20051397056_______________|\n";
cout<<"|_______Kelas : 2020B___________________|\n";
cout<<"|_______________________________________|\n";
return 0;
}
