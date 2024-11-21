#include<iostream>
#include<conio.h>
//Maira Maulydia

//fungsi parametrik dengan dua variabel

using namespace std;

float luas(float panjang,float lebar);

int main(){
	
	float panjang_se,lebar_se,luas_se;
	
	cout << "Program Menghitung Luas Segiempat";
	/*Input Panjang dan Lebar*/
	cout << "\n\t panjang :";  //n t itu tabulasi
	cin >> panjang_se;
	cout << "\n\t lebar :";
	cin >> lebar_se;
	/*Menghitung Luas Segiempat*/
	luas_se = luas(panjang_se,lebar_se);
	cout << "\n\n Luas Segiempat =" << luas_se;
} 

float luas (float panjang,float lebar)
{
	return (panjang*lebar);
}
