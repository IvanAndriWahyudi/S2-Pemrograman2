#include <iostream>

using namespace std;

int main(){

	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	cout << "Nilai Terbesar = " << max(x,y) << endl;
	cout << "Nilai Terbesar = " << min(x,y) << endl;	

	return 0;
}