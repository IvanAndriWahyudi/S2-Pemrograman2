#include <iostream>

using namespace std;

struct mahasiswa{
	string nama, nim;
	double tugas, kuis, uts, uas, hasil;
};

double nilaiakhir(int i, mahasiswa siswa[]){
	return (siswa[i].tugas * 0.2) + (siswa[i].kuis * 0.1) + (siswa[i].uts * 0.3) + (siswa[i].uas * 0.4);
}



int main(){

	const int jumlah_siswa = 2;
	mahasiswa siswa[jumlah_siswa];


	cout << "------------------------------------------------------------------------------" << endl;
	cout << "\t\t PROGRAM MENGHITUNG NILAI AKHIR \t\t" << endl;
	cout << "------------------------------------------------------------------------------" << endl << endl;

	for (int i = 0; i < jumlah_siswa; ++i)
	{
		cout << "Masukan Nama Siswa ke-" << i + 1 << 	" = ";
		cin >> siswa[i].nama;
		cout << "Masukan Nim 		= ";
		cin >> siswa[i].nim;
		cout << "Masukan Nilai Tugas 	= ";
		cin >> siswa[i].tugas;
		cout << "Masukan Nilai kuis 	= ";
		cin >> siswa[i].kuis;
		cout << "Masukan Nilai UTS 	= ";
		cin >> siswa[i].uts;
		cout << "Masukan Nilai UAS 	= ";
		cin >> siswa[i].uas;

		cout << endl << "------------------------------------------------------------------------------" << endl;

	}

	 cout << "NAMA" << "\t" << "NIM" << "\t\t" << "TUGAS" << "\t" << "KUIS" << "\t" << "UTS" << "\t" << "UAS" << "\t" << "NILAI AKHIR" << "\t" << "INDEKS" << endl;
     cout << "------------------------------------------------------------------------------" << endl;


	for (int i = 0; i < jumlah_siswa; ++i)
	{
		siswa[i].hasil = nilaiakhir(i, siswa);

        cout << siswa[i].nama << "\t" << siswa[i].nim << "\t" << siswa[i].tugas << "\t" << siswa[i].kuis << "\t" << siswa[i].uts << "\t" << siswa[i].uas << "\t";
      	printf("%.2f \t\t", siswa[i].hasil);

      	if(siswa[i].hasil >= 80){
            cout << " (A) " << endl;
        } else if(siswa[i].hasil >= 70){
            cout << " (B) " << endl;
        } else if(siswa[i].hasil >= 55){
            cout << " (C) " << endl;
        } else if(siswa[i].hasil >= 40){
            cout << " (D) " << endl;
        } else {
            cout << " (E) " << endl;
        }
      	cout << endl;
	}


	return 0;
}
