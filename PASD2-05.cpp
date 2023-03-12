/*
	Nama 	: Muhammad Hisyam
	NPM 	: 4520210026
	Matkul 	: ASD B
	Tugas 	: Prak 1-2
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct hsym{
	string nama[50], nim[12], indeks[10];
	float na[30], quiz[10], uts[10], uas[10];
};

hsym sym;

int main(){
	int i, jm;
	cout << " Jumlah mahasiswa : "; cin >> jm;
	cout << endl;
	for (i=1; i<=jm; i++){
		//data
		cout << "PENGISIAN DATA MAHASISWA KE-" << i << endl;
		cout << "NIM        = "; cin >> sym.nim[i];
		cout << "NAMA       = "; cin >> sym.nama[i];
		cout << "NILAI QUIZ = "; cin >> sym.quiz[i];
		cout << "NILAI UTS  = "; cin >> sym.uts[i];
		cout << "NILAI UAS  = "; cin >> sym.uas[i];
		//menghitung
		sym.na[i] = (sym.quiz[i] + sym.uts[i] + sym.uas[i])/3;
		//selection
		if (sym.na[i] <= 44.99)
			sym.indeks[i] = "E";
		else if (sym.na[i] >= 45 && sym.na[i] <= 55.99)
			sym.indeks[i] = "D";
		else if (sym.na[i] >= 56 && sym.na[i] <= 59.99)
			sym.indeks[i] = "C";
		else if (sym.na[i] >= 60 && sym.na[i] <= 63.99)
			sym.indeks[i] = "C+";
		else if (sym.na[i] >= 64 && sym.na[i] <= 67.99)
			sym.indeks[i] = "B-";
		else if (sym.na[i] >= 68 && sym.na[i] <= 71.99)
			sym.indeks[i] = "B";
		else if (sym.na[i] >= 72 && sym.na[i] <= 75.99)
			sym.indeks[i] = "B+";
		else if (sym.na[i] >= 76 && sym.na[i] <= 79.99)
			sym.indeks[i] = "A-";
		else if (sym.na[i] >= 80)
			sym.indeks[i] = "A";
		cout << endl;
	}
	system("cls");
	cout << "Data yang telah dimasukkan adalah :" << endl;
	cout << "=========================================================================================" << endl;
	cout << "|     NIM      |           NAMA            |  QUIZ  |  UTS  |  UAS  |  N.A   |  INDEKS  |" << endl;
	cout << "=========================================================================================" << endl;
	for (i=1; i<=jm; i++){
		cout << "|  " << left << setw(12) << sym.nim[i];
		cout << "|  " << setw(25) << sym.nama[i];
		cout << "|  " << setw(6) << sym.quiz[i];
		cout << "|  " << setw(5) << sym.uts[i];
		cout << "|  " << setw(5) << sym.uas[i];
		cout << "|  " << setw(6) << setprecision(3) << sym.na[i];
		cout << "|    " << setw(6) << sym.indeks[i] << "|";
		cout << endl;
	}
	cout << "=========================================================================================" << endl;
	cout << endl;
	cin.get();
}