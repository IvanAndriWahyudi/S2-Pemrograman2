#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x;

    cout <<"Masukkan 1 nilai = ";
    cin >> x;

    cout <<"Hasil pembulatan keatas = "<<ceil(x)<<endl;
    cout<<"Hasil pembulatan kebawah = "<<floor(x)<<endl;
    return 0;
}
