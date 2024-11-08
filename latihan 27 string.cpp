#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<windows.h>
//tentang string
//Maira Maulydia

using namespace std;

int main(){
	char kd[3];
	char nama[20];
	float harga=0;
	int jml,
	hasil = 0;
	
	cout<< "===========================================================\n";
	cout<< "              PENJUALAN KOMPUTER PENUSA                    \n";
	cout<< "===========================================================\n";
	cout<< "input kode :";
	cin>> kd ;
	hasil = strcmp(kd,"PII"); //strcmp string compile
	if (hasil == 0)
	{
		strcpy(nama,"Komp PENTIUM II"); //strcpy string copy
		harga = 1500000;
	}
	hasil = strcmp(kd,"PIII");
	if (hasil==0)
	{
		strcpy(nama,"Komp PENTIUM III");
		harga = 2500000;
	}
	hasil = strcmp(kd,"PIV");
	if (hasil==0)
	{
		strcpy(nama,"Komp PENTIUM");
		harga = 3500000;
	}
	
	cout<<setprecision(15);
	cout<<"nama :" <<nama<<endl;
	cout<<"harga :" <<harga<<endl;
	cout<<"jumlah jual :";
	cin>> jml;
	long tharga = jml*harga;
	cout<<"total harga:" << setw(9) << tharga <<endl;
	cout<<"===============================================================\n";
	
	return 0;
}
