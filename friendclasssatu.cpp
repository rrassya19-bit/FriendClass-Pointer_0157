#include <iostream>
#include <string>
using namespace std;

class Siswa;

class Orang {
private:
    string nama;

public:
    void Setnama(string pnama);
    friend class Siswa;
};