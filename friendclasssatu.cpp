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

class Siswa {
private:
    int id;

public:
    void setid(int pid);
    void displayAll(Orang &a);
};

void Siswa::displayAll(Orang &a) {
    cout << id << endl << a.nama << endl;
}

void Orang::Setnama(string pnama) {
    nama = pnama;
}

void Siswa::setid(int pid) {
    id = pid;
}

int main() {
    Orang joko;
    Siswa joko_siswa;
    return 0;
}