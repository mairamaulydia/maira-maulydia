#include<iostream>
#include<iomanip>
//maira maulydia
//nim 240121094
//UTS praktek

using namespace std;

int main(){
	cout <<setprecision(12);
	const int maxmahas=100;
	string nama[maxmahas],kode[maxmahas],jurusan[maxmahas];
	float npm[maxmahas],pembA[maxmahas],jmlcicilan[maxmahas],bsrcicilan[maxmahas],pembke[maxmahas],uangK[maxmahas],uangKT[maxmahas],sisauangK[maxmahas];
	int jmlmhs =0;
	float ttlkuliah=0;
	char lagi;
	
	cout<<"                                      PEMBAYARAN UANG KULIAH                                               "<<endl;
	cout<<"==========================================================================================================="<<endl;
	
	do{
		cout<<"Mahasiswa Ke- "<<jmlmhs +1 <<endl;
		cout<<"Nama Mahasiswa           :";
		cin >>nama[jmlmhs];
		cout<<"NPM                      :";
		cin >>npm[jmlmhs];
		cout<<"Kode                     :";
		cin >>kode[jmlmhs];
		
		if(kode        [jmlmhs] == "SI"){
			jurusan	   [jmlmhs] = "Sistem Informasi";
			pembA 	   [jmlmhs] = 2100000 ;
			jmlcicilan [jmlmhs] = 7 ;
			bsrcicilan [jmlmhs] = 300000;
		}
		else if(kode   [jmlmhs]   == "TI"){
			jurusan    [jmlmhs]   = "Teknik Informatika";
			pembA 	   [jmlmhs]   = 2500000 ;
			jmlcicilan [jmlmhs]   = 7 ;
			bsrcicilan [jmlmhs]   = 300000;
		}
		else if(kode   [jmlmhs] == "KA"){
			jurusan    [jmlmhs] = "Komputer Akuntansi";
			pembA 	   [jmlmhs] = 1700000 ;
			jmlcicilan [jmlmhs] = 6 ;
			bsrcicilan [jmlmhs] = 200000;
		}
		else if(kode   [jmlmhs] == "MI"){
			jurusan    [jmlmhs] = "Manajemen Informatika";
			pembA 	   [jmlmhs] = 1500000 ;
			jmlcicilan [jmlmhs] = 6 ;
			bsrcicilan [jmlmhs] = 250000;
		}
		
		cout<<"Jurusan                  :"<<jurusan[jmlmhs]<<endl;
		cout<<"Pembayaran Awal          :Rp"<<pembA[jmlmhs]<<endl;
		cout<<"Jumlah Cicilan           :"<<jmlcicilan[jmlmhs]<<endl;
		cout<<"Besar Cicilan            :Rp"<<bsrcicilan[jmlmhs]<<endl;
		cout<<"Pembayaran Ke            :";
		cin >>pembke[jmlmhs];
		
		uangK [jmlmhs]= pembA [jmlmhs] + (jmlcicilan [jmlmhs] * bsrcicilan [jmlmhs]);
		uangKT [jmlmhs] = pembA[jmlmhs] + (pembke [jmlmhs] * bsrcicilan [jmlmhs]);
		sisauangK [jmlmhs] = uangK [jmlmhs] - uangKT[jmlmhs];
		
		ttlkuliah += sisauangK[jmlmhs];
		
		
		cout<<"Uang Kuliah                  :Rp"<<uangK[jmlmhs]<<endl;
		cout<<"Uang Kuliah Terbayar         :Rp"<<uangKT[jmlmhs]<<endl;
		cout<<"Sisa Uang Kuliah             :Rp"<<sisauangK[jmlmhs]<<endl;
		
				
		jmlmhs++;
		
		cout<< endl;
		
		cout<< "Masih Ingin Menghitung Uang Kuliah Mahasiswa? [Y/T] :" ;
		cin >>lagi;
	} while (lagi == 'Y' || lagi == 'y');
	
	cout<<"========================================================================================================================================================\n";
	cout << setw(15) << left<< "no"
	     << setw(15) << "nama"
         << setw(15) << "Kode"
         << setw(15) << "Jurusan"
         << setw(15) << "uang kuliah"
         << setw(15) << "pembayaran awal"
         << setw(15) << "jumlah cicilan"
         << setw(15) << "Besar Cicilan"
         << setw(15) << "pembayaran ke "
         << setw(15) << "uang kuliah terbayar" 
         << setw(15) << "Sisa uang kuliah"<< endl;
		 
	cout<< "========================================================================================================================================================\n";
	
	
	for (int i = 0; i < jmlmhs; i++){
		cout << setw(15) << i + 1
             << setw(15) << nama[i]
             << setw(15) << kode[i]
             << setw(15) << jurusan[i]
             << setw(15) << uangK[i]
             << setw(15) << pembA[i]
             << setw(15) << jmlcicilan[i]
             << setw(15) << bsrcicilan[i]
             << setw(15) << pembke[i]
             << setw(15) << uangKT[i] 
		     << setw(15) << sisauangK[i] << endl;
		
	}
	
	cout<<"total uang kuliah yang harus dibayar:Rp."<<ttlkuliah<<endl;
	
	return 0;
}

