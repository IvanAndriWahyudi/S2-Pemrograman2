#include <iostream> // cout, cin
#include <fstream> // ofstream, ifstream
#include <stdlib.h> // exit
#include <stdio.h> // gets

using namespace std;
struct datamahasiswa
{
char npm[10];
char nama[20];
float ipk;
} mhs;
main()
{
ofstream FileMhs ("datamhs.dat", ios::app); // append=menambah
if (!FileMhs)
{
cerr<<"File tidak dapat dibuka..."<<endl;
exit(1);
}
char jwb='Y';
cout<<"Input Data Mahasiswa"<<endl;
while (jwb=='Y' || jwb=='y')
{
cout << endl;
cout << "NPM = "; cin>>mhs.npm;
cout << "Nama = "; cin.ignore(); gets(mhs.nama);
cout << "IPK = "; cin>>mhs.ipk;
FileMhs.write((char*)&mhs, sizeof(mhs)); // perintah merekam data
cout << "Ada Data Lagi [Y/T] = "; cin >> jwb;
}
FileMhs.close();
}
