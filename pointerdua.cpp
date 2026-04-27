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
    return 0;
}