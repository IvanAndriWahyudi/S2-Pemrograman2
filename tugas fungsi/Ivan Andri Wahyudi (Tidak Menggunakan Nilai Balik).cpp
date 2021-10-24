#include <iostream>

using namespace std;

float bil1, bil2;

void perkalian(){
	float hasil = bil1 * bil2;
	cout << bil1 << " * " << bil2 << " = " << hasil << endl;
}

void pembagian(){
	float hasil = bil1 / bil2;
	cout << bil1 << " / " << bil2 << " = " << hasil << endl;
}

void penjumlahan(){
	float hasil = bil1 + bil2;
	cout << bil1 << " + " << bil2 << " = " << hasil << endl;
}

void pengurangan(){
	float hasil = bil1 - bil2;
	cout << bil1 << " - " << bil2 << " = " << hasil << endl;
}

int main(){

	cout << "Masukan Bilangan Pertama = ";
	cin >> bil1;
	cout << "Masukan Bilangan Kedua = ";
	cin >> bil2;

	perkalian();
	pembagian();
	penjumlahan();
	pengurangan();

	return 0;
}