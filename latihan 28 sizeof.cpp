#include<iostream>
#include<conio.h>
//Maira Maulydia

using namespace std;

int main()
{
	
	char nama [20];
	char alamat [35];
	
	cout << "Masukkan Nama Anda :";
	cin.getline(nama,sizeof (nama)); //sizeof membaca string sesuai dengan ukuran yang sudah didefinisikan
	cout << "Masukkan Alamat Anda :";
	cin.getline(alamat,sizeof(alamat));
	cout << "Nama Anda Adalah :" <<nama<<endl;
	cout << "Alamat Anda :" <<alamat<<endl;
	
	return 0;
}
