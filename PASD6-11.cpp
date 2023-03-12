/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Modul 6 Nomor 11
*/

#include <iostream>
#include <iomanip>
using namespace std;

class SYM
{
    public:
    void Sym_(int[],int,int);
    int NumList[9] = {65,2,44,26,19,22,5,3,12};
};

SYM syam;

int main() 
{
    int d, iii;
    cout << "data sebelum diurutkan" << endl;
    for (int d=0;d<9;d++)
    {
        cout << setw(3) << syam.NumList[d];
    }
    cout << endl;
    cout << endl;
    syam.Sym_(syam.NumList,0,9);
    cout << " Data Setelah Diurutkan " << endl;
    for (int iii=0;iii<9;iii++)
    cout << setw(3) << syam.NumList[iii] << endl;
    cin.get();
}

void SYM::Sym_(int numbers[], int left, int right)
{
    int pivot,l_hold,r_hold;
    l_hold=left;
    r_hold=right;
    pivot = numbers[left];

    while (left<right)
    {
        while ((numbers[right]>=pivot)&&(left<right))
        right--;

        if (left!=right)
        {
            numbers[left]=numbers[right];
            left++;
        }
        while ((numbers[left]<=pivot)&&(left<right))
        {
            left++;
        }
        if (left!=right)
        {
            numbers[right]=numbers[left];
            right--;
        }
    }
    numbers[left]=pivot;
    pivot = left;
    left=l_hold;
    right=r_hold;

    if (left<pivot)
    Sym_(numbers,left,pivot-1);
    if (right>pivot)
    Sym_(numbers,pivot+1,right);
}
