#include <iostream>
using namespace std;

class Mahasiswa
{
    public:
    int nim;
    void showNim()
    {
        cout << "No induk = " << nim << endl;
    }
};

int main()
{
    Mahasiswa * Mhs = new Mahasiswa[1];
    Mhs->nim = 2;
    Mhs->showNim();
    delete Mhs;
    return 0;
}