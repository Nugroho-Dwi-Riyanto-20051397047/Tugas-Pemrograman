//* Program Billing Warnet *//
/* Nugroho Dwi Riyanto */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int tarif,tarifm,tarifd,jam,menit,detik;
	cout<<"Nugroho Dwi Riyanto (20051397047)";
	cout<<"\n \n";
	
	cout<<"SELAMAT DATANG DI WARNET NUGROHO\n";
	cout<<"========================================================================================================================\n";
	
	
	cout<<"mulai\n";
	
	cout<<"jam mulai = ";
	cin >> jam;
	cout<<"menit mulai = ";
	cin >> menit;
	cout<<"detik mulai = ";
	cin >> detik;
	cout<<"\n \n";
	
	cout<<"selesai\n";
	
	cout<<"jam selesai = ";
	cin >> jam;
	cout<<"menit selesai = ";
	cin >> menit;
	cout<<"detik selesai = ";
	cin >> detik;
	
	tarif=5000;
	tarifm=tarif/60;
	tarifd=tarifm/60;
	cout<<"\n \n";
	
	cout<<"tarif perjam (Rp) : " << tarif <<endl;
	cout<<"tarif permenit (Rp) : " << tarifm <<endl;
	cout<<"tarif perdetik (Rp) : " << tarifd <<endl;
	cout<<"total yang harus di bayar (Rp) : " << tarif <<endl;
	cout<<"\n \n";
	
	cout<<"Terima Kasih, selamat berkunjung kembali";


	
getch();}
