#include<iostream>
#include<string>
//Maira Maulydia
//fungsi string

using namespace std;
int main(){
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	//CONCATENATION //MENGGABUNGAKAN 2 KATA
	string result = str1 + " " + str2;
	cout << "concatenated : " << result <<std::endl;
	
	//LENGTH //PANJANG KARAKTER
	size_t length = result.length();
	cout << "length:" << length<<std::endl;
	
	//substring //mengambil kata posisi karakter atau posisi ke 6
	string sub = result.substr(6,6);
	cout << "substring:"<< sub << std::endl;
	
	//find //posisi keberapa
	size_t pos = result.find("PENUSA");
	cout << "position of 'PENUSA':" << pos <<std::endl;
	
	//replace //menambah kata dari karakter 0 sampai ke 5
	result.replace(0,5,"HI");
	cout << "replaced:" << result << std::endl;
	
	return 0;
}


