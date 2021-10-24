#include <iostream>
#include <string.h>
#include <stdio.h> 

using namespace std;

int main(){
int nama,  panjang;
char nama1[20];
char nama2[20];
char npm[20];
char alamat[20];
char kelas[20];

	cout << "Masukkan Nama Depan = ";
	cin >> nama1;
	cout << "Masukkan Nama Belakang = ";
	cin >> nama2;
	strcat(nama1, nama2);
	strupr(nama1);

	cout << "Masukan Npm = ";
	cin >> npm;
	panjang= strlen (npm);

	cout << "Masukan Alamat = ";
	cin >> alamat;
	strupr(alamat);

	cout << "Masukan Kelas = ";
	cin >> kelas;
	strlwr(kelas);

	cout << "====================================" << endl;

	
	cout << "Nama 	= " << nama1 << endl;
	cout << "Npm 	= " << npm << " Panjang Npm Adalah " << panjang << " Karakter " << endl;
	cout << "Alamat 	= " << alamat << endl;
	cout << "Kelas 	= " << kelas << endl;


	return 0;
}