/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Prak Modul 7 Nomor 23
*/

#include <iostream>
#include <string.h>
#define MAXSIZE 17
using namespace std;

struct SYAM
{
    int Huruf[MAXSIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
};

SYAM sym;

void Syam (int *f)
{
    f[0] = 1;
    f[1] = 1;
    for (int i=2; i<MAXSIZE; ++i)
        f[i] = f[i-2] + f[i-1];
}

int Hisyam(int *a, int key, int n)
{
    int rendah = 0, tinggi = n-1;
    int mid = 0;
    int k = 0;
    int f[MAXSIZE];
    Syam(f);
    while (n>f[k]-1)
        ++k;
    for (int i=n; i<f[k]-1; ++i)
        a[i] = a[tinggi];
    while (rendah <= tinggi)
    {
        mid = rendah + f[k-1]-1;
        if(a[mid] > key)
        {
            tinggi = mid-1;
            k = k - 1;
        }
        else if (a[mid] < key)
        {
            rendah = mid+1;
            k = k - 2;
        }
        else
        {
            if (mid <= tinggi)
                return mid;
            else 
                return -1;
        }
    }
    return-1;
}

int main()
{
    int k;
    cout << " Masukkan Angka Yang Dicari : "; cin >> k;
    int pos = Hisyam( sym.Huruf, k, MAXSIZE);
    if (pos !=-1)
        cout << " Data Ditemukan Pada Posisi : " << pos+1 << " Isi Elemenya = " << k << endl;
    else
        cout << " Data Tidak Ditemukan" << endl;
    cin.get();
    return 0;
}