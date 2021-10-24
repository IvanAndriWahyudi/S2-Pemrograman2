#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float kuadrat, pembulatan, logaritma;
	cout << "Masukan Akar Kuadrat = ";
	cin >> kuadrat;
	cout << "Masukan Angka yang mau di bulatkan = ";
	cin >> pembulatan;
	cout << "Masukan Logaritma = ";
	cin >> logaritma;

	cout << "\nAkar Kuadrat Dari " << kuadrat << " = " << sqrt(kuadrat) << endl;
	cout << "Hasil Pembulatan 5.6 " << pembulatan << " = " << round(pembulatan) << endl;	
	cout << "Nilai Logaritma 4 " << logaritma << " = " << log(logaritma) << endl;

	return 0;
}
