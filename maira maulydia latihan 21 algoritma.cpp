#include<iostream>
#include<iomanip>
using namespace std;
//maira maulydia
//nim 240121094
//penjualan barang elektronik

int main(){
	const int maxbarang =100;
	string nbarang[maxbarang];
	int harga[maxbarang];
	int jumlahjual[maxbarang];
	float totalharga[maxbarang];
	float diskon[maxbarang];
	float totalbayar[maxbarang];
	int totalpendapatan= 0;
	int jumlahbarang= 0;
	char lagi;
	
	do {
		cout<<"masukkan nama barang ke-" <<jumlahbarang + 1<<":";
		cin>>nbarang[jumlahbarang];
		cout<<"masukkan harga barang"<<nbarang[jumlahbarang]<<":";
		cin>>harga[jumlahbarang];
		cout<<"jumlah jual"<<nbarang[jumlahbarang]<<":";
		cin>>jumlahjual[jumlahbarang];
		totalharga[jumlahbarang]= harga[jumlahbarang]*jumlahjual[jumlahbarang];
		jumlahbarang++;
		diskon[jumlahbarang]= totalharga[jumlahbarang] * 0.1;
		jumlahbarang++;
		totalbayar[jumlahbarang]= totalharga[jumlahbarang] - diskon[jumlahbarang];
		
		cout<<"apakah anda ingin input data lagi ? (Y/T):";
		cin>> lagi;
	}while (lagi=='y' || lagi=='Y');
	
	cout<<"==================================================================\n";
	cout << setw(15) << left << "Nama"
         << setw(15) << "Harga"
         << setw(15) << "Jumlah jual"
         << setw(15) << "Total harga"
         << setw(15) << "Diskon"
         << setw(15) << "Total bayar" << endl;
    cout<<"=================================================================\n";
    
    for (int i = 0; i<jumlahbarang; i++){
    	cout << setw(15) << left << nbarang[i]
             << setw(15) << harga[i]
             << setw(15) << jumlahjual[i]
             << setw(15) << totalharga[i]
             << setw(15) << diskon[i]
             << setw(15) << totalbayar[i] << endl; 
	}
	
	cout<<"=================================================================\n";
	
	return 0;
	
}
