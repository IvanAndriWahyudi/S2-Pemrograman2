#include <iostream>
#include <fstream> 
#include <stdlib.h> 
#include <stdio.h>

using namespace std;

struct kasir{
	char namaBarang[20];
	float hargaBarang;
	int jumlahBarang;
}ksr;


main(){

	ofstream FileKsr ("dataksr.dat", ios::out);
	if (!FileKsr){
		cerr << "File Tidak Dapat DiBuka...." << endl;
		exit(1);
	}
	char jwb = 'y';
	cout << "Input Data " << endl;
	while (jwb == 'Y' || jwb == 'y'){
		cout << endl;
		cin.ignore(); 
		cout << "Nama Barang 	= ";
		gets(ksr.namaBarang);
		cout << "Jumlah Barang 	= ";
		cin >> ksr.jumlahBarang;
		cout << "Harga Barang 	= ";
		cin >> ksr.hargaBarang;
		FileKsr.write((char*)&ksr, sizeof(ksr));
		cout << "Ada Data Lagi [Y/T = ";
		cin >> jwb;
	}
		FileKsr.close();
}
