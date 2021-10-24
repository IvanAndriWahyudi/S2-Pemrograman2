#include <iostream>
#include <string.h>
#include <stdio.h> // gets

using namespace std;


int main(){

 char kalimat[30];
 int panjang;
 cout<<"Masukkan sembarang kata/kalimat = "; gets(kalimat);
 panjang=strlen(kalimat);
 cout<<"Panjang kata/kalimat yang diinputkan = " << panjang << " karakter"<< endl;
 

 return 0;
}
