#include <iostream>
#include <string>
#include <conio.h>
#include<iomanip>
//Maira Maulydia

using namespace std;

float gP(float gjperjam, int jamker);
int uangL(int jamker);
float uangM(int jamker);
int jasaL(int jamker);
string nama;
int jamker;
const float gjperjam = 2000; 
const int Lperjam = 3000; 
char lagi;
int main()
{
	
    
    do{     
    
        cout << "\nPT REJEKI NOMPLOK"<<endl;
        cout << "================================================="<<endl;
        cout << "Masukkan Nama :";
        cin >> nama;
        cout << "Jumlah Jam Kerja :";
        cin >> jamker;
        cout << endl;
        
        float gjP = gP(gjperjam, jamker);
        int lembur = uangL(jamker);
        float makan = uangM(jamker);
        int jasa = jasaL(jamker);


        cout << nama <<" Bekerja Selama" <<jamker<<"Jam, maka"<<endl;             
        cout << "\nGaji Pokok :";
        if (jamker > 7) {
            cout <<"7 * " << gjperjam;
        } else {
            cout <<jamker<<" * "<< gjperjam;
        }
        cout << " = " <<gjP<<endl;
    
        if (jamker > 7) {
            int jamL = jamker-7;
            cout << "Uang Lembur: " <<jamL<< " * "<< Lperjam<< " = "<<lembur<< endl;
        }
     
        cout << "Uang Makan : " << makan <<endl;
        cout << "Uang Jasa Lembur: " <<jasa<<endl;
        
        float gajittl = gjP+lembur+makan + jasa;
        cout << "Gaji yang Diterima :" <<gajittl<< endl;
        
        lagi = getch();
        cout<<endl;

    } while (lagi == 'y' || lagi == 'Y'); 
     
    return 0;
}
   float gP(float gjPerJam,int jamker ){ 
    if (jamker > 7){
        return 7*gjPerJam;
    } else{
        return jamker * gjPerJam;
    }
}
int uangL(int jamker){  
    if (jamker > 7){
        int jamL = jamker - 7;
        return jamL * Lperjam;
    }
    return 0;
}
float uangM(int jamker){
    if (jamker>= 8 && jamker<= 10){
        return 1500; 
    } else if (jamker > 10){
        return 2500; 
    }
    return 0; 
}
int jasaL(int jamker){  
    if (jamker >= 9){
        return 3000; 
    }
    return 0; 
}

