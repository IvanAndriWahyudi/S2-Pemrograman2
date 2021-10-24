#include <iostream> // cin, cout
#include <string.h> // strcpy
#include <stdio.h> // gets

using namespace std;

int main(){

 char kalimat[30];
 cout<<"Masukan sembarang kata/kalimat = "; gets(kalimat);
 strupr(kalimat);
 cout<<"Hasil Perubahan = "<<kalimat;
 
 return 0;
}