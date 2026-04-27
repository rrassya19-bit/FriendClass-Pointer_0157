#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = " << nim << endl;
    }
};

int main() {
    Mahasiswa mhs{1};   //object mhs
    mhs.showNim();      //menampilkan nim mhs, member access menggunakan operator titik

    Mahasiswa& refMhs = mhs;    //pointer reference refMhs yang merujuk ke mhs
    refMhs.nim = 2;             //mengubah nim mhs melalui reference refMhs, member access menggunakan operator titik
    mhs.showNim();

    Mahasiswa* pMhs = &mhs;   //pointer dereference pMhs yang menyimpan alamat mhs
    pMhs->nim = 3;            //arrow operator digunakan untuk mengakses anggota nim melalui pointer pMhs
    pMhs->showNim();
    return 0;
}