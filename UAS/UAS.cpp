#include <iostream> 
#include <fstream> 
#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>

using namespace std;

void rekamdata();

struct datapasien{
	char norm[10]; // nomor rekam medis
	char nama[20]; // nama pasien
	char kelompok; // kelompok usia : [1]. Bayi, [2]. Anak-anak, [3]. Dewasa
	float suhu;
	} pas;


main(){

	ofstream FilePasien ("dataPasien.dat", ios::out);
	if (!FilePasien){
		cerr << "File Tidak Dapat DiBuka...." << endl;
		exit(1);
	}
	char jwb = 'y';
	cout << "Input Data " << endl;
	while (jwb == 'Y' || jwb == 'y'){
		cout << endl;
		cout << "Nomor Rekam Medis = ";
		cin >> pas.norm;
		cin.ignore(); 
		cout << "Nama = ";
		gets(pas.nama);
		cout <<  "Kelompok = ";
		cin >> pas.kelompok;

		cout << " Suhu = ";
		cin >> pas.suhu;
		FilePasien.write((char*)&pas, sizeof(pas));
		cout << "Ada Data Lagi [Y/T = ";
		cin >> jwb;
	}
		FilePasien.close();

}