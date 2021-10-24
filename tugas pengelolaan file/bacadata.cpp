#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

void infoKsr();

struct dataksr{
	char namaBarang[20];
	float hargaBarang;
	int jumlahBarang;
}ksr;

main(){
	ifstream ksrFile ("dataksr.dat", ios::in);
	if (!ksrFile){
		cerr << "File Could Not Be Opened " << endl;
		exit(1);
	}
	cout <<"-----------------------------------------------------------"<<endl;
	cout << setiosflags (ios:: left) << setw(5) << "No."
	<< setw(15) << "Nama Barang "
	<< setw(17) << "jumlah Barang"
	<< setw(16) << "Harga Barang"
	<< setw(17) << "Total" << endl;
	cout <<"-----------------------------------------------------------"<<endl;

	ksrFile.read((char *)&ksr, sizeof(ksr));
	while (!ksrFile.eof()){
		infoKsr();
		ksrFile.read((char *)&ksr, sizeof(ksr));
	}
	cout <<"-----------------------------------------------------------"<<endl;
	ksrFile.close();
}

int no = 0;
float total;
void infoKsr(){
	no ++;
	total = ksr.jumlahBarang * ksr.hargaBarang;

	cout << setiosflags(ios::left) << no << setw(4) << "."
	<<setw(16) << ksr.namaBarang
	<<setw(16) << ksr.jumlahBarang
	<<setw(16) << ksr.hargaBarang
	<<setw(16) << total << endl;
}
