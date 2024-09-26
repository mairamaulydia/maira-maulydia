#include<iostream>
#include<iomanip>
//maira maulydia
//nim 240121094

using namespace std;

int main()
{
	float gajiperjam=500,jmlahjamker,lembur,totalgaji;
	char npegawai[15];
	cout<<"PERHITUNGAN GAJI PEGAWAI HARIAN"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"nama pegawai:";
	gets(npegawai);
	cout<<"jumlah jam kerja:";
	cin>>jmlahjamker;
	if(jmlahjamker>7){
		lembur=(1.5*gajiperjam*(jmlahjamker-7));
		totalgaji=(7*gajiperjam)+lembur;
	}else {
		lembur=0;
		totalgaji=(jmlahjamker*gajiperjam)+lembur;
	}
	cout<<"total gaji pegawai harian="<<totalgaji<<endl;
	return 0;
}
