#include <iostream>

using namespace std;


float bil1, bil2;

float perkalian(){
	float hasil = bil1 * bil2;
	return hasil;
}
float pembagian(){
	float hasil = bil1 / bil2;
	return hasil;
}
float penjumlahan(){
	float hasil = bil1 + bil2;
	return hasil; 
}
float pengurangan(){
	float hasil = bil1 - bil2;
	return hasil;
}


int main(){

	cout << "Masukan Bilangan Pertama = ";
	cin >> bil1;
	cout << "Masukan Bilangan kedua = ";
	cin >> bil2;

	cout << bil1 << " * " << bil2 << " = " << perkalian() << endl;
	cout << bil1 << " / " << bil2 << " = " << pembagian() << endl;
	cout << bil1 << " + " << bil2 << " = " << penjumlahan() << endl;
	cout << bil1 << " - " << bil2 << " = " << pengurangan() << endl;

	return 0;
}
