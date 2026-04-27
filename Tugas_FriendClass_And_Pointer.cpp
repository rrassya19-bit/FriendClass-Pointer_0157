#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;

class LayangLayang
{
private:
    double d1, d2, s1, s2;

public:
    void inputData()
    {
        cout << "\n===== Input Data Layang-Layang =====" << endl;
        cout << "Masukkan diagonal 1 : "; cin >> d1;
        cout << "Masukkan diagonal 2 : "; cin >> d2;
        cout << "Masukkan sisi 1     : "; cin >> s1;
        cout << "Masukkan sisi 2     : "; cin >> s2;
        cout << endl;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
    friend class BelahKetupat;
};

class BelahKetupat
{
private:
    double d1, d2, s;

public:
    void inputData()
    {
        cout << "\n===== Input Data Belah Ketupat =====" << endl;
        cout << "Masukkan diagonal 1 : "; cin >> d1;
        cout << "Masukkan diagonal 2 : "; cin >> d2;
        cout << "Masukkan sisi       : "; cin >> s;
        cout << endl;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling()
    {
        return 4 * s;
    }

    friend void tampilkanKeliling(LayangLayang, BelahKetupat);
};

void tampilkanKeliling(LayangLayang ObjectLayang, BelahKetupat ObjectBelahKetupat)
{
    double kelilingLayang = 2 * (ObjectLayang.s1 + ObjectLayang.s2);
    double kelilingBelah = 4 * ObjectBelahKetupat.s;

    cout << "\n============================" << endl;
    cout << "       Hasil Keliling       " << endl;
    cout << "============================" << endl;
    cout << "Keliling Layang-Layang : " << kelilingLayang << endl;
    cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;
    cout << endl;
}

int main()
{
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelahKetupat;

    ObjectLayang.inputData();
    ObjectBelahKetupat.inputData();

    cout << "\n========================" << endl;
    cout << "       Hasil Luas       " << endl;
    cout << "========================"<< endl;
    cout << "Luas Layang-Layang : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat : " << ObjectBelahKetupat.hitungLuas() << endl;
    cout << endl;

    tampilkanKeliling(ObjectLayang, ObjectBelahKetupat);

    return 0;
}