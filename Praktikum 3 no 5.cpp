// Nugroho Dwi Riyanto //
// 20051397047 //
// Pogram menghitung jumlah dari deret //

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int a=3, b=4, c, jumlah=0, i, n;

cout<<" Menghitung Jumlah deret Bilangan \n";
cout<<" \n";
cout<<"=====================================================================\n";
cout<<"Masukkan bilagan awal :3\n";
cout<<"Masukkan beda :4\n"; 
cout<<"Masukkan jumlah deret ke-n :"; cin >>n;
cout<<"=====================================================================\n";
cout<<" \n";
cout<<"deret ke-"<<n<<" : ";
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
