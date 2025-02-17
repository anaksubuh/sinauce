/*-----------------------------------
 Nama Program  : Input dan Output 
 Nama          : Johanes Septiawan
 NPM           : 2024050116
 Tanggal Buat  : 17 Februari
 -----------------------------------*/
 
#include <iostream>
using namespace std;

int main(){
    float A, B, T, L ;
    cout << "Input Panjang Atas   (cm) : ";
    cin  >> A;
    cout << "Input Panjang Bawah  (cm) : ";
    cin  >> B;
    cout << "Input Panjang Tinggi (cm) : ";
    cin  >> T;
    L = 0.5 * (A+B) / T;
    cout << "Luas Persegi Panjang : " << L << endl;

    return 0;
}