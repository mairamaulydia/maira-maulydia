#include<iostream>
#include<iomanip>
//maira maulydia
//nim 240121094

using namespace std;

int main()
{
	int bil;
	
	cout<<"ketika angka dari[0..9]=";
	cin>>bil;
	switch(bil){
		case 0:
			cout<<"anda mengetikkan angka 0";
			break;
		case 1:
			cout<<"anda mengetikkan angka 1";
			break;
		case 2:
			cout<<"anda mengetikkan angka 2";
			break;
		case 3:
			cout<<"anda mengetikkan angka 3";
			break;
		case 4:
			cout<<"anda mengetikkan angka 4";
			break;
		case 5:
			cout<<"anda mengetikkan angka 5";
			break;
		case 6:
			cout<<"anda mengetikkan angka 6";
			break;
		case 7:
			cout<<"anda mengetikkan angka 7";
			break;
		case 8:
			cout<<"anda mengetikkan angka 8";
			break;
		case 9:
			cout<<"anda mengetikkan angka 9";
			break;
			
		default:
		   cout<<"anda mengetikkan yang salah";									
	}
	return 0;
}
