/*-----------------------------------
 Nama Program  : Input dan Output 
 Nama          : Johanes Septiawan
 NPM           : 2024050116
 Tanggal Buat  : 17 Februari
 -----------------------------------*/
 
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float panjang, lebar, tinggi, luaspersegipanjang, luassegitiga , luasgabungan;
    
    cout << "Masukkan nilai panjang (x)  : ";  
    cin >> panjang;
    cout << "Masukkan nilai lebar   (y)  : ";
    cin >> lebar;
    cout << "Masukkan nilai tinggi  (z)  : ";
    cin >> tinggi;
    
    luaspersegipanjang = panjang * lebar;
    luassegitiga = 0.5 * lebar * tinggi;
    luasgabungan = luaspersegipanjang + luassegitiga;

    cout << "Luas persegi panjang adalah : " << luaspersegipanjang << endl;
    cout << "Luas segitiga       adalah  : " << luassegitiga << endl;
    cout << "Luas gabungan       adalah  : " << luasgabungan << endl;

    return 0;
}