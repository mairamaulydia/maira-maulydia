#include<iostream>
#include<iomanip>

using namespace std;
//maira maulydia

int main(){
	char npegawai[20],jabatan[12];
	float gaji,pajak,pinjaman,gajibersih=0;
	
cout<<"GAJI KARYAWAN STMIK PENUSA"<<endl;
cout<<"--------------------------"<<endl;

     for(int i =1;i <=10 ;i++){
     cout<<"nama pegawai:";
     cin>>npegawai;
     cout<<"jabatan:";
     cin>>jabatan;
     cout<<"gaji:";
     cin>>gaji;
     pajak=0.15*gaji;
     cout<<"pajak:"<<pajak<<endl;
     cout<<"pinjaman";
     cin>>pinjaman;
     gajibersih=gaji-(pinjaman+pajak);
     cout<<"gaji bersih="<<gajibersih<<endl;
	 }
	 
	 return 0;
}
