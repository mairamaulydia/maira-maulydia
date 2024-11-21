#include<iostream>
#include<conio.h>
//Maira Maulydia

//fungsi nonparametrik atau fungsi hitungt yang tidak membawa nilai pada variabel tertentu

using namespace std;
void hitung(); //mendeklarasikan (prototype) fungsi yang tidak menghasilkan nilai

int main(){
	
	cout << "\n Menghitung Volume Kubus";
	hitung(); //memanggil fungsi hitung
	return 0;
} 

void hitung()
{
	float sisi,volume;
	cout << "\n Sisi Kubus :";
	cin >> sisi;
	volume = sisi*sisi*sisi;
	cout << "\n Volume KUBUS yaitu :"<<volume;
}
