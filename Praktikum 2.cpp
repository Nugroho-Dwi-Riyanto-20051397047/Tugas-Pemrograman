// Nugroho Dwi Riyanto //
// 20051397047 //

#include <iostream>
#include <conio.h> 
#define jam_kerja 48
#define lembur_perjam 4000
main ()
{
	char nama[25],gol;
	float jam_lembur,gaji,total_jamkerja;
	printf("PROGRAM MENGHITUNG UPAH MINGGU KARYAWAN\n");
	printf("Nama Karyawan  : ");scanf ("%s",&nama);
	printf("Golongan       : ");scanf ("%s",&gol);
	printf("Total Jam Kerja : ");scanf ("%f",&total_jamkerja);
	printf("========================================================================================================================\n\n");
jam_lembur=total_jamkerja-jam_kerja;
	if (total_jamkerja>jam_kerja)
	if (gol=='A' || gol=='a')
	{gaji=(5000*jam_kerja)+(4000*jam_lembur);}
	else
	if (gol=='B' || gol=='b')
	{gaji=(7000*jam_kerja)+(4000*jam_lembur);}
	else
	if (gol=='C' || gol=='c')
	{gaji=(8000*jam_kerja)+(4000*jam_lembur);}
	else
	if (gol=='D' || gol=='d')
	{gaji=(1000*jam_kerja)+(4000*jam_lembur);}
	
	if (total_jamkerja<jam_kerja)
	if (gol=='A' || gol=='a')
	gaji=(5000*total_jamkerja);
	else
	if (gol=='B' || gol=='b')
	gaji=(7000*total_jamkerja);
	else
	if (gol=='C' || gol=='c')
	gaji=(8000*total_jamkerja);
	else
	if (gol=='D' || gol=='d')
	gaji+(10000*total_jamkerja);
	
	printf("NAMA KARYAWAN : %s \n",nama);
	printf("GAJI KARYAWAN : %.2f \n",gaji);


getch();
}

