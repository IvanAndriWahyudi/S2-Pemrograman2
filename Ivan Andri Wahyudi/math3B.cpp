#include <iostream>
#include <cmath>

using namespace std;

int main(){

	float nilai;
	cout << "Masukan Nilai = ";
	cin >> nilai;

	cout << "Pembulatan Nilai " << nilai << " ke Atas 	= " << ceil (nilai) << endl;
	cout << "Pembulatan Nilai " << nilai << " ke Bawah	= " <<  floor(nilai) << endl;

	return 0;
}
