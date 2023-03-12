/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Modul 8 Prak Nomor 7
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
using namespace std;

struct Node
{
    char INFO;
    struct Node* Left;
    struct Node* Right;
    struct Node* Link;
};

typedef struct Node Simpul;
Simpul *root, *P, *Q[30], *LastCurrent, *Current, *LastKiri;
const int kiri = 0, kanan = 1;
int i, n, Flag, FlagHabis, Level;
char X, A[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void Inisialisasi()
{
    root = NULL;
    P = NULL;
}

void BuatSimpul(char X)
{
    P = (Simpul*) malloc(sizeof(Simpul));
    if (P != NULL)
    {
        P -> INFO = X;
        P -> Left = NULL;
        P -> Right = NULL;
        P -> Link = NULL;
    }
    else
    {
        cout << " Memory Penuh " << endl;
        exit(1);
    }
}

void BuatSimpulAkar()
{
    if (root == NULL)
    {
        root = P;
        LastCurrent = root;
        LastKiri = root;
        Flag = kiri;
        Level = 0;
        n = 1;
        FlagHabis = 1;
    }
    else
    {
        cout << " Pohon Sudah Ada " << endl;
        exit(1);
    }
}

void TambahSimpul( int n, char X)
{
    if (root != NULL)
    {
        n = n+1;
        if (FlagHabis == 1)
        {
            FlagHabis = 0;
            Current = P;
            LastCurrent -> Left = P;
            Flag = kanan;
            Level = Level + 1;
        }
        else
        {
            LastCurrent -> Right = P;
            Current -> Link = P;
            Flag = kiri;
            if (n == (pow(2, Level+1)-1))
            {
                FlagHabis = 1;
                LastCurrent = LastKiri -> Left;
                LastKiri = LastKiri -> Left;
            }
            else
            {

            }
        }
    }
}

void BacaUrutNomor()
{
    int i, j;
    Simpul *Q[129], *Current;
    i=1; j=1;
    Q[i] = root;
    while (Q[i] != NULL)
    {
        Current = Q[i];
        cout << Current -> INFO << endl;
        if (Current -> Left != NULL)
        {
            j++; Q[j]=Current -> Left;
        }
        if (Current -> Right != NULL)
        {
            j++; Q[i] = Current -> Right;
        }
        i++;
    }
    
}

int main()
{
    int i, n;
    char X;
    int num[20] = {0, 22, 66, 11, 7, 63, 14, 4, 10};
    char INFOx[20] = {'P', 'A', 'N', 'C', 'A', 'S', 'I', 'L', 'A'};
    Inisialisasi();
    X = INFOx[0];
    BuatSimpul(X);
    BuatSimpulAkar();
    for (i=1; i<=9; i++)
    {
        n = num[i];
        X = INFOx[i];
        BuatSimpul(X);
        TambahSimpul(n,X);
        BacaUrutNomor();
    }
    cin.get();
}