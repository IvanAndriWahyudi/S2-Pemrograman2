#include <iostream> // cin, cout
#include <string.h> // strcpy
using namespace std;

int main(){

 char a1[] = "A";
 char a2[] = "a";
 char b1[] = "A";
 char b2[] = "a";

 cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<" -> ";
 cout<<strcmp(a1,a2)<<endl;
 cout<<"Hasil Perbandingan "<<a2<<" dan "<<a1<<" -> ";
 cout<<strcmp(a2,a1) <<endl;
 cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<" -> ";
 cout<<strcmp(a1,b1) <<endl;
 cout<<"Hasil Perbandingan "<<a2<<" dan "<<b2<<" -> ";
 cout<<strcmp(a2,b2) <<endl;
 
 return 0;
}
