/*
    Nama    : MUhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Modul 8 Prak 1
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node
{
    char INFO;
    struct node* LEFT;
    struct node* RIGHT;
};

typedef struct node simpul;
simpul *root, *p, *q[30], *r, *current;
char X;

void Inisialisasi()
{
    root = NULL;
    p = NULL;
}

void BuatSimpul(char X)
{
    p = (simpul*) malloc(sizeof(simpul));
    if( p !=NULL)
    {
        p->INFO = X;
        p->LEFT = NULL;
        p->RIGHT = NULL;
    }
    else
    {
        cout << "Pembuatan Simpul Gagal" << endl;
        exit(1);
    }
}

void BuatSimpulAkar()
{
    if(root == NULL)
    {
        if(p != NULL)
        {
            root = p;
            p ->LEFT = NULL;
            p ->RIGHT = NULL;
        }
        else
        {
            cout << "Simpul Belum Dibuat" << endl;
        }
    }
    else 
    {
        cout << "Simpul Sudah Ada !!!" << endl;
    }
}

void insertUrutNomer (char Input[6])
{
    int i, j, flag;
    char x;
    flag = 0;
    i = 1;
    j = 1;
    q[i] = root;
    while(flag == 0 && j < 6)
    {
        x = Input[j-1];
        if(x !='0')
        {
            BuatSimpul(x);
            current = q[i];
            current -> LEFT = p;
            j++;
            q[j] = p;
        }
        else
        {
            flag = 1;
            j++;
            q[j] = NULL;
        }
        if (flag == 0)
        {
            X = Input[j-1];
            if(X !='0')
            {
                BuatSimpul(X);
                current ->RIGHT = p;
                j++;
                q[j] = p;
            }
        }
        else
        {
            flag = 1;
            j++;
            q[j] = NULL;
        }
        i++;
    }
}

void BacaUrutNomor()
{
    int i,j,n,counter;
    i=1; j=1; n=1; counter=0;
    int level = 0;
    while (q[i] !=NULL)
    {
        current = q[i];
        if(i == 1)
        {
             cout << "Level " << level << "\n";
        }
        cout << current -> INFO << "  -  ";
        counter++;
        if(counter == n) 
        {
            level++;
            cout << "\nLevel " << level << "";
        }
        if (counter == n )
        {
            cout << endl;
            counter = 0;
            n = n*2;
        }
        if (current -> LEFT !=NULL)
        {
            j++;
            q[i] = current-> LEFT;
        }
        if (current ->RIGHT != NULL)
        {
            j++;
            q[i] = current-> RIGHT;
        }
        i++;
    }

}
int main()
{
    char root = 'C';
    char Daun[6];
    Inisialisasi();
    BuatSimpul(root);
    BuatSimpulAkar();
    cout << "Membuat Data Root dan Daun/Leaf Menggunkan Inputan" << endl;
    for (int i=0; i<6; i++)
    {
        cout << "Silahkan Masukkan Huruf Ke-"<< i+1 << "    " ;cin >> Daun;
    }
    cout << " Menampilkan Hasil : " << Daun;
    insertUrutNomer(Daun);
    BacaUrutNomor();
    return 0;
    cin.get();
}