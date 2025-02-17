/*-----------------------------------
 Nama Program  : Input dan Output 
 Nama          : Johanes Septiawan
 NPM           : 2024050116
 Tanggal Buat  : 17 Februari
 -----------------------------------*/
 
#include <iostream>
using namespace std;

int main(){
    int jum, n;
    float rata;
    cout << "Input Jumlah Angka : ";
    cin  >> jum;
    cout << "Input Total Data   : ";
    cin  >> n;
    rata = jum/n;
    cout << "Rata-Rata adalah    : " << rata;

    return 0;
}