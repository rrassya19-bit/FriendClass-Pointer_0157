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