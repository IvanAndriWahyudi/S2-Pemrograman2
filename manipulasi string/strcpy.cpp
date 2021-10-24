#include <iostream> // cin, cout
#include <string.h> // strcpy
#include <stdio.h> // gets

using namespace std;

int main()
{
 char kalimat[30], hasil[30];
 cout<<"Masukkan sembarang kata/kalimat = "; gets(kalimat);

 strcpy(hasil, kalimat);
 cout<<"Hasil copy-an = "<<hasil;
}
