// Nugroho Dwi Riyanto //
// 20051397047 //
// Program menghitung barisan //
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
int a=pow(1,3), b=pow(1,3), c, jumlah=0, i, n=6;

cout<<" Menghitung Jumlah deret Bilangan \n";
cout<<" \n";
cout<<"=====================================================================\n";
cout<<"Masukkan bilagan awal :pow(1,3)\n";
cout<<"Masukkan beda :pow(1,3)\n"; 
cout<<"Masukkan jumlah barisan ke-n :6"; 
cout<<"\n";
cout<<"=====================================================================\n";
cout<<" \n";
cout<<"barisan ke-"<<n<<" : ";
cout<<a<<",";
jumlah = jumlah+a;

for (i=0; i<n-1; i++)
{
c = a+b;
a=c;
cout<<c<<",";
jumlah = jumlah + c;
}
cout<<" \n";
cout<<"jumlah deret ke-"<<n<<" : ";
cout<<jumlah;
getch ();
return 0;
}
