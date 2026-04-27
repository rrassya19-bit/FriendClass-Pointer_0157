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
    Mahasiswa mhs{1};
    mhs.showNim();

    Mahasiswa& refMhs = mhs;
    refMhs.nim = 2;
    return 0;
}