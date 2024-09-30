#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char npegawai[15];
    int penjualan;
    int komisi;
    int tkomisi;
    
    cout << "PT MURAH HATI" << endl;
    cout << "HASIL PENJUALAN PEGAWAI DAN BONUS KOMISINYA " << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << "Nama Pegawai ";
        cin >> npegawai;
        cout << "Penjualan : ";
        cin >> penjualan;
        

        if (penjualan < 500000) {
            komisi = 0;
        } else if (penjualan >500000 && penjualan < 500001) {
            komisi = penjualan * 0.10;
        } else {
            komisi = (500000 * 0.10) + (penjualan - 500000) * 0.15;
        }
        
        cout << "Bonus Komisi " << i + 1 << "." << komisi << endl;
        
        tkomisi += komisi; 
    }
    
    cout << "Total komisi yang harus dibayar pt: " << tkomisi << endl;
    return 0;
}

