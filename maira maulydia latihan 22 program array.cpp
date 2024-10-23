#include <iostream>
#include <iomanip>
//maira maulydia
//nim 240121094

using namespace std;

int main() {
    const int maxpeg = 50;
    string nama[maxpeg], golongan[maxpeg], kode[maxpeg], jabatan[maxpeg];
    float gaji[maxpeg], tunjangan[maxpeg], pinjman[maxpeg], pajak[maxpeg], gjikotor[maxpeg], gjibersih[maxpeg];
    int jmlahpeg= 0;
    float ttlbiaya= 0; 
	char lagi; 
    
    cout << "GAJI PEGAWAI PT. TELKOM" << endl;
    cout << "-----------------------" << endl;

    do {
      
        cout << "Pegawai ke-" << jmlahpeg + 1 << endl;
        cout << "Nama Pegawai              : ";
        cin >> nama[jmlahpeg];
        cout << "Golongan                  : ";
        cin >> golongan[jmlahpeg];
        cout << "Kode Jabatan              : ";
        cin >> kode[jmlahpeg];

        
        if (golongan[jmlahpeg] == "Ia") {
            gaji[jmlahpeg] = 500000;
        } else if (golongan[jmlahpeg] == "IIa") {
            gaji[jmlahpeg] = 750000;
        } else if (golongan[jmlahpeg] == "IIIa") {
            gaji[jmlahpeg] = 1000000;
        } else if (golongan[jmlahpeg] == "Ib") {
            gaji[jmlahpeg] = 1500000;
        } else if (golongan[jmlahpeg] == "IIb") {
            gaji[jmlahpeg] = 1750000;
        } else if (golongan[jmlahpeg] == "IIIb") {
            gaji[jmlahpeg] = 2500000;
        }

        
        if (kode[jmlahpeg] == "Dir") {
            jabatan[jmlahpeg] = "Direktur";
            tunjangan[jmlahpeg] = 450000;
        } else if (kode[jmlahpeg] == "Sek") {
            jabatan[jmlahpeg] = "Sekretaris";
            tunjangan[jmlahpeg] = 300000;
        } else if (kode[jmlahpeg] == "Wak") {
            jabatan[jmlahpeg] = "Wakil Direktur";
            tunjangan[jmlahpeg] = 375000;
        } else if (kode[jmlahpeg] == "Stf") {
            jabatan[jmlahpeg] = "Staf Administrasi";
            tunjangan[jmlahpeg] = 200000;
        }

        
        cout << "Pinjaman                  : ";
        cin >> pinjman[jmlahpeg];

        
        pajak[jmlahpeg] = gaji[jmlahpeg] * 0.05;
        gjikotor[jmlahpeg] = gaji[jmlahpeg] + tunjangan[jmlahpeg];
        gjibersih[jmlahpeg] = gjikotor[jmlahpeg] - pinjman[jmlahpeg] - pajak[jmlahpeg];

        
        ttlbiaya += gjibersih[jmlahpeg];

        jmlahpeg++;

       
        cout << "Masih ingin input gaji lagi? [Y/T]: ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y');
    
    cout<<"=================================================================================================================================\n";
    cout << left;
    cout << setw(5) << "No"
         << setw(15) << "Nama"
         << setw(10) << "Golongan"
         << setw(15) << "Jabatan"
         << setw(15) << "Gaji"
         << setw(15) << "Tunjangan"
         << setw(15) << "Pinjaman"
         << setw(15) << "Pajak"
         << setw(15) << "Gaji Kotor"
         << setw(15) << "Gaji Bersih" << endl;

    cout << "============================================================================================================================\n";

    for (int i = 0; i < jmlahpeg; i++) {
        cout << setw(5) << i + 1
             << setw(15) << nama[i]
             << setw(10) << golongan[i]
             << setw(15) << jabatan[i]
             << setw(15) << gaji[i]
             << setw(15) << tunjangan[i]
             << setw(15) << pinjman[i]
             << setw(15) << pajak[i]
             << setw(15) << gjikotor[i]
             << setw(15) << gjibersih[i] << endl;
    }

    
    cout << endl;
    cout << "Total gaji seluruhnya:                                                               Rp " << ttlbiaya << endl;

    cout << endl;
    cout<<"===========================================================================================================\n";
    

    return 0;
}

