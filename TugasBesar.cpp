/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Si Penjualan Tiket Pesawat
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h> // Untuk Library Fungsi Malloc
#include <stdlib.h>
#include <math.h>
#define MAX 10
using namespace std;
 
// Deklarasi Struktur
struct pesawat // Deklarasi Struktur Simpul
{
    string alamat[50], Telepon[50], Pasport[50];
    int Kursi, INFO;
};

typedef int angka;
typedef char huruf[30];
int top=-1, stack[MAX];
pesawat *P; // pointer
char kembali;
pesawat Pst;

void DataDiri()
{
    angka umur;
    huruf nama;
    int i, jm;
    char kembali;
    cout << " ~~~~~~~~~~~~ Silahkan Masukkan Data Diri Anda ~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << " Silahkan Masukkan Jumlah Penumpang : "; cin >> jm;
    cout << endl;
    for (i=1; i<=jm; i++)
    {
        cout << endl;
        cout << " Pengisian Penumpang Ke- " << i << endl;
        cout << endl;
        cout << " Silahkan Masukkan Nama Anda           : "; cin >> nama;
        cout << " Silahkan Masukkan Umur Anda           : "; cin >> umur;
        cout << " Silahkan Masukkan Nomor Telepon Anda  : "; cin >> Pst.Telepon[i];
        cout << " Silahkan Masukkan Tempat Tinggal Anda : "; cin >> Pst.alamat[i];
        cout << " Silahkan Masukkan ID Paspport Anda    : "; cin >> Pst.Pasport[i];
    }
    cout << endl;
    for (i=1; i<=jm; i++)
    {
        cout << endl;
        cout << " Data Yang Telah Dimasukkan Adalah : " << endl;
        cout << endl;
        cout << " Nama Anda             : " << nama << endl;
        cout << " Umur Anda             : " << umur << endl;
        cout << " Nomor Telepon Anda    : " << Pst.Telepon[i] << endl;
        cout << " Alamat Anda           : " << Pst.alamat[i] << endl;
        cout << " ID Pasport Anda       : " << Pst.Pasport[i] << endl;
    }
    cout << endl;
}

void kelas()
{
    pesawat Pst;
    P = new pesawat;
    P -> Kursi = 47;
    char Maskapai, kelas;
    int harga_tiket, PPN, Jum_Bayar, org;
    do
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Pilih Maskapai Penerbangan ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << endl;
        cout << "===========================================================================================================" << endl;
        cout << "|   kode Pesawat   |      Tujuan Anda         |       Kelas       |       Kelas       |       Kelas       |" << endl;
        cout << "|                  |                          |     EKONOMI(E)    |      BISNIS(B)    |    EKSEKUTIF(X)   |" << endl;
        cout << "===========================================================================================================" << endl;
        cout << "|1. Citilink       | Bali                     |     Rp 700.000    |     Rp 2.000.000  |    Rp 2.500.000   |" << endl;
        cout << "|2. Garuda         | Jepang                   |     Rp 800.000    |     Rp 1.000.000  |    Rp 5.000.000   |" << endl;
        cout << "|3. Lion Air       | Yogyakarta               |     Rp 400.000    |     Rp 600.000    |    Rp 900.000     |" << endl;
        cout << "|4. Batik Air      | Surabaya                 |     Rp 500.000    |     Rp 800.000    |    Rp 1.500.000   |" << endl;
        cout << "|5. Air Asia       | Semarang                 |     Rp 600.000    |     Rp 900.000    |    Rp 2.000.000   |" << endl;
        cout << "===========================================================================================================" << endl;
        cout << "Masukkan Maskapai Yang Anda Inginkan [1/2/3/4/5] : "; cin >> Maskapai;
        cout << "Masukkan Jumlah Penumpang = "; cin >> org;
        cout << "Kursi/ seat               = " << P -> Kursi << endl; 
        
        switch(Maskapai)
        {
            case '1' :
            {
                cout << "Kode Pesawat               : Citilink " << endl;
                cout << "Kota Tujuan Anda Adalah    : BALI " << endl;
                cout << "======================================" << endl;
                cout << "Masukkan Kode Kelas Pesawat [E/B/X] : "; cin >> kelas;
                cout << endl;
                if(kelas=='E' || kelas == 'e')
                {
                    harga_tiket = 700000;
                    PPN = 0;
                    Jum_Bayar = harga_tiket + PPN * org;
                    cout << "Harga Tiket  Rp= " << harga_tiket << endl;
                    cout << "PPN          Rp= " << PPN << endl;
                    cout << "Jumlah Bayar Rp= " << Jum_Bayar << endl;
                }
                else if (kelas == 'B' || kelas == 'b')
                {
                    harga_tiket = 2000000;
                    PPN = 0.5*harga_tiket;
                    Jum_Bayar = harga_tiket + PPN * org;
                    cout << "Harga Tiket  = Rp " << harga_tiket << endl;
                    cout << "PPN          = Rp " << PPN << endl;
                    cout << "Jumlah Bayar = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'X' || kelas == 'x')
                {
                    harga_tiket = 2500000;
                    PPN = 0.1*harga_tiket;
                    Jum_Bayar = harga_tiket + PPN * org;
                    cout << "Harga Tiket  = Rp " << harga_tiket << endl;
                    cout << "PPN          = Rp " << PPN << endl;
                    cout << "Jumlah Bayar = Rp " << Jum_Bayar << endl;
                }
                break;
            }
            case '2' :
            {
                cout << "Kode Pesawat               : Garuda " << endl;
                cout << "Kota Tujuan Anda Adalah    : JEPANG " << endl;
                cout << "====================================" << endl;
                cout << "Masukkan Kode Kelas Pesawat [E/B/X] : "; cin >> kelas;
                cout << endl;
                if(kelas == 'E' || kelas == 'e')
                {
                    harga_tiket = 800000;
                    PPN         = 0;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'B' || kelas == 'b')
                {
                    harga_tiket = 1000000;
                    PPN         = 0.5*harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'X' || kelas == 'x')
                {
                    harga_tiket = 5000000;
                    PPN         = 0.1*harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl;
                }
                break;
            }
            case '3' :
            {
                cout << "Kode Pesawat            : Lion Air " << endl;
                cout << "Kota Tujuan Anda Adalah : Yogyakarta " << endl;
                cout << "=====================================" << endl;
                cout << "Masukkan Kode Kelas Pesawat [E/B/X] : "; cin >> kelas;
                cout << endl;
                if (kelas == 'E' || kelas == 'e')
                {
                    harga_tiket = 400000;
                    PPN         = 0;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'B' || kelas == 'b')
                {
                    harga_tiket = 600000;
                    PPN         = 0.5*harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket     = Rp " << harga_tiket << endl;
                    cout << "PPN             = Rp " << PPN << endl;
                    cout << "Jumlah Bayar    = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'X' || kelas == 'x')
                {
                    harga_tiket = 900000;
                    PPN         = 0.1 * harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl; 
                }
                break;
            }
            case '4' :
            {
                cout << "Kode Pesawat       : Batik Air " << endl;
                cout << "Kota Tujuan        : Surabaya " << endl;
                cout << "===============================" << endl;
                cout << "Masukkan Kode Kelas Pesawat [E/B/X] : "; cin >> kelas;
                cout << endl;
                if  (kelas == 'E' || kelas == 'e')
                {
                    harga_tiket = 500000;
                    PPN         = 0;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl; 
                }
                else if (kelas == 'B' || kelas == 'b')
                {
                    harga_tiket = 800000;
                    PPN         = 0.5 * harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'X' || kelas == 'x')
                {
                    harga_tiket = 1500000;
                    PPN         = 0.1 * harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket    = Rp " << harga_tiket << endl;
                    cout << "PPN            = Rp " << PPN << endl;
                    cout << "Jumlah Bayar   = Rp " << Jum_Bayar << endl; 
                }
                break;
            }
            case '5' :
            {
                cout << "Kode Pesawat     : Air Asia" << endl;
                cout << "Kota Tujuan      : Semarang" << endl;
                cout << "===========================" << endl;
                cout << "Masukkan Kode Kelas Pesawat : " << endl;
                cout << endl;
                if (kelas == 'E' || kelas == 'e')
                {
                    harga_tiket = 600000;
                    PPN         = 0;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket  = Rp " << harga_tiket << endl;
                    cout << "PPN          = Rp " << PPN << endl;
                    cout << "Jumlah Bayar = Rp " << Jum_Bayar << endl; 
                }
                else if (kelas == 'B' || kelas == 'b' )
                {
                    harga_tiket = 900000;
                    PPN         = 0.5 * harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket  = Rp " << harga_tiket << endl;
                    cout << "PPN          = Rp " << PPN << endl;
                    cout << "Jumlah Bayar = Rp " << Jum_Bayar << endl;
                }
                else if (kelas == 'X' || kelas == 'x')
                {
                    harga_tiket = 2000000;
                    PPN         = 0.1 * harga_tiket;
                    Jum_Bayar   = harga_tiket + PPN * org;
                    cout << "Harga Tiket  = Rp " << harga_tiket << endl;
                    cout << "PPN          = Rp " << PPN << endl;
                    cout << "Jumlah Bayar = Rp " << Jum_Bayar << endl; 
                }
                break;
            }
            default:
            cout << "Anda Salah Memasukkan Kode " << endl;
        }
        cout << endl;
        cout << "Apakah Anda Ingin Kembali [Y/T] : "; cin >> kembali;
    }
    while (kembali == 'Y' || kembali == 'y');
}

void push() // stack
{
    int i, jm;
    if(top == MAX-1)
    {
        cout << ">> Stack sudah Penuh !" << endl;
    }
    else
    {
        top++;
        cout << endl;
        cout << " Masukan Data Ke- "; cin >> stack[top];
        cout << endl;
        cout << "Data [" << stack[top] << "] Telah Ditambah ! " << endl;
        cout << endl;
    }
}

void quick_sort(int arr[], int left, int right)
{
    int i = left, j = right;int tmp;
    int pivot = arr[(left+right)/2];/* partition */
    while (i<j)
    {
        while (arr[i] < pivot)
        i++;
        while (arr[j] > pivot)
        j--;
        if (i<=j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;j--;
        };
    }; /* recursion */
    if (left < j)
        quick_sort(arr, left, j);
    if (i < right)
        quick_sort(arr, i, right);
}

void fibo()
{
    int n, f1 = 0, f2 = 1, berikutnya = 0;
    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> n;
	cout<<endl;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; ++i)
    {
        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1)
        {
            cout << " " << f1<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << f2 << " ";
            continue;
        }
        berikutnya = f1 + f2;
        f1 = f2;
        f2 = berikutnya;
         // Mencetak deret bilangan fibonacci berikutnya.
        cout << berikutnya << " ";
    }
}

int main()
{
    int i,n,data[50];
    cout<<"Masukan banyak data: ";cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Masukan data ["<<i<<"] : ";cin>>data[i];
    }
    cout<<"\nData sebelum diurutkan: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<"\n";
    quick_sort(data,0,n-1);//hasil pengurutan
    cout<<"\nHasil pengurutan:\n";
    {
        int i;
        for (i=0;i<n;i++)
        cout<<data[i]<<" ";
        cout<<"\n";
    }
    DataDiri();
    push();
    kelas();
    fibo();
    cin.get();
}