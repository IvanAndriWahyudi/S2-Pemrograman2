#include <iostream> // cin, cout
#include <fstream> // ofstream, ifstream
#include <stdlib.h> // exit
#include <string.h> // strcpy
#include <iomanip> //setiosflags
using namespace std;

void infoMhs(); // prototype fungsi
struct datamhs
{
char npm[10];
char nama[20];
float ipk;
} mhs;

main(){
ifstream mhsFile ("datamhs.dat", ios::in);
if (!mhsFile)
{
cerr<<"File could not be opened"<<endl;
exit(1);
}
cout<<"-----------------------------------------------------------"<<endl;
cout <<setiosflags(ios::left)<<setw(5)<<"No."
<<setw(11)<<"NPM"
<<setw(21)<<"Nama Mahasiswa"
<<setw(5) <<"IPK"
<<setw(17)<<"Prediket"<<endl;
cout<<"-----------------------------------------------------------"<<endl;
mhsFile.read((char *)&mhs,sizeof(mhs)); // baca record 1
while (!mhsFile.eof())
{
infoMhs();
mhsFile.read((char*)&mhs, sizeof(mhs)); // baca record berikutnya
}
cout<<"-----------------------------------------------------------"<<endl;
mhsFile.close();
}
int no=0;
char pre[18];
void infoMhs() // definisi fungsi
{
no++;
if (mhs.ipk>=3.50 && mhs.ipk<=4.00)
strcpy(pre,"Dengan Pujian");
else
if (mhs.ipk>=2.80)
strcpy(pre,"Sangat Memuaskan");
else
if (mhs.ipk>=2.25)
strcpy(pre,"Memuaskan");
else
strcpy(pre," ");
cout <<setiosflags(ios::left)<<no<<setw(3) << ". "
<<setw(11)<<mhs.npm
<<setw(21)<<mhs.nama
<<setw(7) << mhs.ipk
<< setw(17)<<pre<<endl;
}