#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<windows.h>
//tentang string
//Maira Maulydia

using namespace std;

int main(){
	char npeg[30];
	char gol[15];
	char kodejbt[20];
	float jbt,gj,tunJ,pinjaman,pjk,Tgjiktr,Tgjiber;
	
	cout<< "===============================================================================\n";
	cout<< "                          GAJI PEGAWAI PT.TELKOM                               \n";
	cout<< "===============================================================================\n";
	cout<< " Nama Pegawai :";
	cin >>npeg;
	cout<< " Masukkan Kode Jabatan :";
	cin >>kodejbt;
	cout<< " Masukkan Kode Golongan :";
	cin >>gol;
	
	if (strcmp(gol,"Ia")==0){
		gj = 500000;
	}else if (strcmp(gol,"IIa")==0){
		gj = 750000;
	}else if (strcmp(gol,"IIIa")==0){
		gj = 1000000;
    }else if (strcmp(gol,"Ib")==0){
		gj = 1500000;
    }else if (strcmp(gol,"IIb")==0){
		gj = 1750000;
    }else if (strcmp(gol,"IIIb")==0){
		gj = 2500000;
	}else{
		cout<<'.';
	}
	
	if(strcmp(kodejbt,"Dir")==0)
	{
		strcpy(npeg,"Direktur");
		tunJ = 450000;
	}else if (strcmp(kodejbt,"Sek")==0){
		strcpy(npeg,"Sekertaris");
		tunJ = 300000;
	}else if (strcmp(kodejbt,"Wak")==0){
		strcpy(npeg,"Wakil Direktur");
		tunJ = 375000;
	}else if (strcmp(kodejbt,"Stf")==0){
		strcpy(npeg,"Staf Administrasi");
		tunJ = 200000;
	}else{
		cout<<'.';
	}
	
	cout<<" Masukkan Pinjaman :";
	cin>>pinjaman;
	
	pjk = 0.05 * gj;
	Tgjiktr = gj - tunJ;
	Tgjiber = Tgjiktr - pinjaman - pjk;
	
	cout<<setprecision(20);
	cout<<"====================================================================================\n";
	cout<<"Nama Pegawai                :  " << npeg<<endl;
	cout<<"Kode Golongan               :  " << gol<<endl;
	cout<<"Kode Jabatan                :  " << kodejbt<<endl;            
	cout<<"Gaji                        : Rp " << setw(10)<< gj<<endl;
	cout<<"Tunjangan                   : Rp " << setw(10)<< tunJ<<endl;
	cout<<"Pajak                       : Rp " << setw(10)<< pjk<<endl;
	cout<<"Pinjaman                    : Rp " << setw(10)<< pinjaman<<endl;
	cout<<"Total Gaji Kotor            : Rp " << setw(10)<< Tgjiktr<<endl;
	cout<<"Total Gaji Bersih           : Rp " << setw(10)<< Tgjiber<<endl;
	cout<<"===========================================================================================\n";
	
	return 0;
 	
}
