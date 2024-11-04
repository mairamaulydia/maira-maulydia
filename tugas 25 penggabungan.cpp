#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
//untul gotoxy
#include<windows.h>
//untuk membersihkan layar
#include<cstdlib>
//untuk karakter
#include<iomanip>
//tugas gabungan array dan sruct
//maira maulydia

using namespace std;

void gotoxy(int x, int y){
	COORD coord; //struktur untuk mengatur koordinat
	coord.X =x; //koordinat x
	coord.Y =y; //koordinat y
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct data_ujian{
	char npm[9];
	char nama[25];
	double nMid;
	double nilaiSmt;
	double nAkhir;
	char nilaiH;
} mahaS[100]; 

int main()

{
	
	char lg = 'y';
	int hasil, i=0, n=0;
	
	while (lg == 'Y' || lg == 'y')
	{
		system("cls");
		cout<<setprecision(20);
		cout<<"Input Data Mahsiswa\n";
		cout<<"Dosen : Budiman,S.SI \n";
		cout<<"==============================\n";
		n++;
		
		cout<<"NPM:";
		cin>>mahaS[n].npm;
		
		cout<<"NAMA:";
		cin>>mahaS[n].nama;
		
		cout<<"Nilai Mid:";
		cin>>mahaS[n].nMid;
		
		cout<<"NILAI SEMESTER:";
		cin>>mahaS[n].nilaiSmt;
		
		mahaS[n].nAkhir = (0.4 * mahaS[n].nMid) + (0.6 * mahaS[n].nilaiSmt);
		if(mahaS[n].nAkhir >= 80 && mahaS[n].nAkhir <= 100){
			mahaS[n].nilaiH = 'A';
		}
		else if(mahaS[n].nAkhir >=70 && mahaS[n].nAkhir <= 80){
			mahaS[n].nilaiH = 'B';
		}
		else if(mahaS[n].nAkhir >= 55 && mahaS[n].nAkhir < 70){
			mahaS[n].nilaiH = 'C';
		}
		else if(mahaS[n].nAkhir >= 40 && mahaS[n].nAkhir < 55){
			mahaS[n].nilaiH = 'D';
			
		}else if(mahaS[n].nAkhir >= 0 && mahaS[n].nAkhir < 40){
			mahaS[n].nilaiH = 'E';
		}
		else{
			mahaS[n].nilaiH = '.';
		}
		
		cout<< "nilai akhir : " <<mahaS[n].nAkhir<<endl;
		cout<< "nilai huruf : " <<mahaS[n].nilaiH<<endl;
		cout<< "=============================================\n";
		cout<< "input lagi[Y/T]";
		lg = getch();
	}
	
	system("cls");
	cout<< "==============================================================================================\n";
	cout<< "|                            LAPORAN NILAI UJIAN PEMROGRAMAN C++                              |\n";
	cout<< "==============================================================================================|\n";
	cout<< "|NO |     NPM     |     NAMA    |   NILAI MID  |  NILAI SEMESTER  | NILAI AKHIR | NILAI HURUF    |";
	for(i = 1; i <=n; i++){
		gotoxy(0,7+i);cout<<"|";
		gotoxy(2,7+i);cout<<i;
		gotoxy(10,7+i);cout<< mahaS[i].npm;
		gotoxy(20,7+i);cout<< mahaS[i].nama;
		gotoxy(40,7+i);cout<< mahaS[i].nMid;
		gotoxy(55,7+i);cout<< mahaS[i].nilaiSmt;
		gotoxy(70,7+i);cout<< mahaS[i].nAkhir;
		gotoxy(85,7+i);cout<< mahaS[i].nilaiH;
		gotoxy(90,7+i);cout<<"|";
	}
	gotoxy(0,7+i); cout<<"=============================================================================================\n";
	return 0;
	
	
}

