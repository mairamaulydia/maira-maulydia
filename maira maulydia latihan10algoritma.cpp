//dibuat oleh Maira Maulydia
//NIM 240121094
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	
	float jmlahpenjualan,lebihdari=500000,komisi=0.1,sisa=0.15;
	char nbarang[10];
	cout<<"MENENTUKAN KOMISI PEGAWAI"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"nama barang:";
	gets(nbarang);
	cout<<"jumlahpenjualan:";
	cin>>jmlahpenjualan;
	
    if(jmlahpenjualan<=500000){
		sisa=jmlahpenjualan*0.1;
	}else{
		komisi=500000*0.1+(jmlahpenjualan>500000)*0.15;
	}
	
	cout<<"komisi yang diperoleh:"<<komisi<<endl;
	
	return 0;
	
}
