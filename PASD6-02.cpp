/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Modul 6 Nomor 2
*/

#include <iostream>
using namespace std;
class SYM
{
    public:
    int a[50];
};

SYM syam;

void sym(int low, int mid, int high);
void Sym_(int low, int high)
{
    int mid;
    if (low<high)
    {
        mid = (low+high)/2;
        Sym_(low,mid);
        Sym_(mid+1,high);
        sym(low, mid , high);
    }
}

void sym(int low, int mid, int high) 
{
    int h, i, j, b[50], k;
    h=low;
    i=low;
    j=mid+1;
    while ((h<=mid)&&(j<=high))
    {
        if(syam.a[h]<=syam.a[j])
        {
            b[i]=syam.a[h]; h++;
        }
        else
        {
            b[i]=syam.a[j]; j++;
        }
        i++;
    }
    if (h>mid)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=syam.a[k];i++;
        }
    }
    else
    {
        for(k=h; k<=mid; k++)
        {
            b[i]=syam.a[k];i++;
        }
    }
    for (k=low;k<=high;k++)
    syam.a[k]=b[k];
}

int main()
{
    int num, i;
    cout << "************************************" << endl;
    cout << "Merge Sort" << endl;
    cout << "************************************" << endl;
    cout << endl;
    cout << " Masukkan Banyaknya Bilangan = "; cin >> num;
    cout << endl;
    cout << " Sekarang Masukkan " << num << " Bilangan Yang Ingin Diurutkan " << endl;
    for (i=1;i<=num;i++)
    {
        cout << " Bilangan Ke " << i << "    "; cin >> syam.a[i];
    }
    Sym_(1,num);
    cout << endl;
    cout << " Hasil Akhir Pengurutan " << endl;
    cout << endl;
    for (i=1;i<=num;i++)
    cout << syam.a[i] << "   ";
    cout << endl << endl << endl;
    cin.get();
}