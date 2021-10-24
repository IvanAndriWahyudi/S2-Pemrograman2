#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;


void infopas();

struct datapasien{
	char norm[10]; // nomor rekam medis
	char nama[20]; // nama pasien
	char kelompok; // kelompok usia : [1]. Bayi, [2]. Anak-anak, [3]. Dewasa
	float suhu;
	} pas;


main(){


	ifstream pasFile ("dataPasien.dat", ios::in);
	if (!pasFile){
		cerr << "File Could Not Be Opened " << endl;
		exit(1);
	}

	cout << "Data Suhu Tubuh Pasien Klinik Annisa Pekanbaru Bulan Juni 2021" << endl;
	cout <<"---------------------------------------------------------------------"<<endl;
	cout << setiosflags (ios:: left) << setw(5) << "No."
	<< setw(15) << "NoRM "
	<< setw(17) << "Nama Pasien"
	<< setw(16) << "Kelompok Usia"
	<< setw(17) << "Suhu" 
	<< setw(8)  << "Keterangan" <<endl;
	cout <<"---------------------------------------------------------------------"<<endl;

	pasFile.read((char *)&pas, sizeof(pas));
	while (!pasFile.eof()){
		infopas();
		pasFile.read((char *)&pas, sizeof(pas));
	}
	cout <<"---------------------------------------------------------------------"<<endl;
	pasFile.close();


}
int no = 0;
char keterangan[10];
void infopas(){
	no ++;
	while (pas.kelompok <= 3){
			if (pas.kelompok == 1){
				if(pas.suhu >= 36.3)
					strcpy(keterangan,"normal");
				else if(pas.suhu <= 36.3)
					strcpy(keterangan,"Rendah");
				else (pas.suhu >= 37.7)
					strcpy(keterangan,"Tinggi");

			}else if (pas.kelompok == 2){
				if(pas.suhu >= 36.1)
					strcpy(keterangan,"normal");
				else if(pas.suhu <= 36.1)
					strcpy(keterangan,"Rendah");
				else (pas.suhu >= 37.7);
					strcpy(keterangan,"Tingi");

			}else if(pas.kelompok == 3){
				if(pas.suhu >= 36.5)
					strcpy(keterangan,"normal");
				else if(pas.suhu <= 36.1)
					strcpy(keterangan,"rendah");
				else (pas.suhu >= 37.5);
					strcpy(keterangan,"Tinggi");
			}
			else 
				exit(1);
	}

	cout << setiosflags(ios::left) << no << setw(4) << "."
	<<setw(16) << pas.norm
	<<setw(16) << pas.nama
	<<setw(16) << pas.kelompok
	<<setw(10) << pas.suhu 
	<<setw(7)  << keterangan << endl;
}