#include<iostream>
#include<conio.h>
#include<string>
//untul gotoxy
#include<windows.h>
//untuk membersihkan layar
#include<cstdlib>
//untuk karakter
#include<iomanip>
//latihan gabungan array dan sruct
//maira maulydia

using namespace std;

void gotoxy(int x, int y){
	COORD coord; //struktur untuk mengatur koordinat
	coord.X =x; //koordinat x
	coord.Y =y; //koordinat y
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct pegawai{
	char nik[9];
	char nama[20];
	char gol[3];
} peg[20];

int main()
{
	char lg = 'y';
	int hasil, i=0, n=0;
	float gaji;
	
	while (lg == 'Y' || lg == 'y')
	
	{
		system("cls");
		cout<<setprecision(13);
		cout<<"input data pegawai\n";
		cout<<"======================================================================================\n";
		n++;
		
		cout<<"NIK:";
		gets(peg[n].nik);
		
		cout<<"NAMA :";
		gets(peg[n].nama);
		
		cout<<"GOL [I,II]:";
		gets(peg[n].gol);
		cout<<"======================================================================\n";
		
		cout<<"input lagi (y/t):";
		lg=getch();
	}
	
	system("cls");
	gotoxy(5,3); cout<<"                                    LAPORAN DATA PEGAWAI                               \n";
	gotoxy(5,4); cout<<"=============================================================================================\n";
	gotoxy(5,5); cout<<"NO    NIK      NAMA              GOL         GAJI                         ";
	gotoxy(5,6); cout<<"=============================================================================================\n";
	
	for(i = 1; i<= n; i++)
	{
		gotoxy(6,6+i) ; cout<<i;
		gotoxy(11,6+i) ; cout<<peg[i].nik;
		gotoxy(19,6+i); cout<<peg[i].nama;
		gotoxy(38,6+i); cout<<peg[i].gol;
		hasil = strcmp(peg[i].gol,"I");
		if (hasil==0)
		gaji = 750000;
		hasil = strcmp(peg[i].gol,"II");
		if (hasil==0)
		gaji = 1250000;
		gotoxy(45,6+i) ; cout<< gaji;
	}
	
	gotoxy(5,7+i); cout<<"========================================================================================\n";
	return 0;
}
	

