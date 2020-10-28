// Nugroho Dwi Riyanto //
// 20051397047 //
// Program mencetak segitiga angka //

#include<iostream>   
#include<conio.h > 
using namespace std;   
main()  {   
  
 int n,i,j;   
 cout<<"Masukkan segitiga angka : ";   
 cin>>n;   
 cout<<"\n";   
 for (int i=1; i<=n; i++)   
 {   
 
 for (int j=1; j<=i; j++)     
        cout<<j;   
 	 	cout<<" \n";   
 }   
 
 for (int i=n-1; i>=1;i--)   
 {   
 
 for (int j=1;j<=i;j++)   
        cout<<j;    
     	cout<<" \n";   
 }   
 
 getch();  }
