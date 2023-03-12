/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Modul 9 Prak 1
*/

#include <iostream>
using namespace std;
#define n 10
int main()
{
    int N;
    int A[n];
    int i, Lo, Hi, Mid, Flag;
    cout << " Silahkan Masukkan Angka Yang Anda Inginkan " << endl;
    for(i=0; i<=n-1; i++)
    {
        cout << " Silahkan Masukkan Angka Ke-" << i+1 << "   "; cin >> A[i];
    }
    cout << " Masukkan Data Yang Dicari : "; cin >> N;
    Lo=0, Hi=n-1; Flag=0;
    while (Lo <= Hi && Flag == 0)
    {
        Mid=(Lo+Hi)/2;
        if(N==A[Mid])
            Flag=1;
        else
            if(N<A[Mid])
                Hi=Mid-1;
            else
                Lo=Mid+1;
    }
    if(Flag==1)
        cout << "Nilai " << N << " Ditemukan Pada Baris Ke " << (Mid+1) << endl;
    else
        cout << " Data Tidak Ditemukkan " << endl;
}