// Nugroho Dwi Riyanto //
// 20051397047 //
// Program membuat tabel perkalian //
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{

int i,j;
cout<<"\t\t\tTabel Perkalian\n\n\n";
cout<<"\n";
 
for (int i=1;i<=10;i++)
{ 
    cout<<setw(5)<<i;
    
for (int j=2;j<=10;j++)
    cout<<setw(5)<<"*";
    cout<<endl;
}

getch();

}
