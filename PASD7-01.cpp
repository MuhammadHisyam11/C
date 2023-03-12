/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Prak ASD B Modul 7 Nomor 1
*/

#include <iostream>
using namespace std;

int SYAM(int A[], int, int);

int main ()
{
    int Sym[50], maxdata;
    cout << "**************************************" << endl;
    cout << "* * S E Q U E N T A L S E A R C H * * " << endl;
    cout << "**************************************" << endl;
    cout << " Silahkan Masukkan Jumlah Datanya : "; cin >> maxdata;
    cout << endl;
    cout << " Silahkan Masukkan Datanya: " << endl;
    for (int count=0; count<maxdata; count++)
    {
        cout << "\t" << " Data [" << count+1 << "] " << "--> "; cin >> Sym[count];
    }
    int Syam = 0;
    int His = 0;
    cout << "**************************************" << endl;
    cout << endl;
    cout << " Masukkan Data Yang Anda Cari = "; cin >> Syam;
    His = SYAM (Sym, maxdata, Syam);
    if ( His != -1)
        cout << " Data Yang Dicari Ditemukan Pada Posisi : Data [" << His+1 << "]" << endl;
    else
        cout << " Data Yang Anda Cari Tidak Ditemukan " << endl;
    cin.get();
    return 0;
}

int SYAM (int tika[], int JmlhElemenArray, int Elemen)
{
    int flaq=-1;
    for(int count=0; count < JmlhElemenArray; count++)
    {
        if (Elemen==tika[count])
        {
            flaq=count;
            break;
        }
    }
    return flaq;
}