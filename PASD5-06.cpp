/*
	Nama 	: Muhammad Hisyam
	NPM 	: 4520210026
	Matkul 	: ASD B
	Tugas 	: PASD5-06
*/
#include <iostream>
#include <string.h>
using namespace std;

class SYAM{
    public:
    int SYm[10] = {10, 8, 9, 7, 2, 1, 3, 5, 4, 6};
};

SYAM syam;

void tukar(int a, int b){
	int t;
	t = syam.SYm[b];
	syam.SYm[b] = syam.SYm[a];
	syam.SYm[a] = t;
}

void displaySym(){
	cout << "    ";
	for (int i=0; i<10; i++)
	{
		cout << syam.SYm[i] << " "; 
	}
	cout << endl;
}

void bubble_sort(){
	for(int i=1; i<10; i++){
		for(int j=10-1; j>=i; j--){
			if(syam.SYm[j]<syam.SYm[j-1])
			tukar(j,j-1);
		}
		displaySym();
	}
	cout << endl;
}

int main(){
	cout << "+----------------------------+" << endl;
	cout << "|        Bubble Sort         |" << endl;
	cout << "+----------------------------+" << endl;
	cout << " Proses Bubble Sort....... " << endl;
	cout << "------------------------------" << endl;
	displaySym();
	bubble_sort();
	cout << "------------------------------" << endl;
	cout << "         Terima Kasih         " << endl;
	cout << "------------------------------" << endl;
	cin.get();
}