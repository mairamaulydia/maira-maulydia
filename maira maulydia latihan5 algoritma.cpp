#include<iostream>
#include<iomanip>

//maira maulydia

using namespace std;//gaji karyawan STMIK PENUSA

int main()
{
	char nama[15],jabatan[15];
	float gaji,pajak,pinjaman,gajibersih=0;
	cout<<"nama pegawai:";
	cin>>nama;
	cout<<"jabatan";
	cin>>jabatan;
	cout<<"gaji";
	cin>>gaji;
	pajak=0.15*gaji;
	cout<<"pajak:"<<pajak<<endl;
	cout<<"pinjaman";
	cin>>pinjaman;
	gajibersih=gaji-(pinjaman+pajak);
	cout<<"gajibersih:"<<gajibersih<<endl;
	return 0;
}
