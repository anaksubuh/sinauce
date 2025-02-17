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
    int num = 37;
    double pi = 3.141592654;
    cout << "heksadesimal = " << hex << num << endl;
    cout << "oktet        = " << oct << num << endl;
    cout << "desimal      = " << dec << num << endl;
    cout << setw(8) << num << endl;
    cout << setw(8) << setfill('*') << pi << endl;
    cout << "Phi          = " << setprecision(10) << pi << endl;
    cout << "Angka        = " << showpos << num << endl;
    
    return 0;
}