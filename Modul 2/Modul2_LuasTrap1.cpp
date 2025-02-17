/*-----------------------------------
 Nama Program  : Input dan Output 
 Nama          : Johanes Septiawan
 NPM           : 2024050116
 Tanggal Buat  : 17 Februari
 -----------------------------------*/
 
#include <iostream>
using namespace std;

int main(){
    float A, B, T, L;
    cout << "Input Panjang Atas   : ";
    cin >> A;
    cout << "Input Panjang Bawah  : ";
    cin >> B;
    cout << "Input Panjang Tinggi : ";
    cin >> T;
    L = 0.5 * (A+B) / T;
    cout << "Luas Trapesium Adalah : " << L << "cm";
}