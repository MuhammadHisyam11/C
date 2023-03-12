/*
Nama    : Muhammad Hisyam
NPM     : 4520210026
Matkul  : ASD B
Tugas   : Modul 3 Nomor 8
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Nama struktur
struct sym{
	string nama[20], alamat[20], kelamin[20], telp[20];
	int umur[3];
};

// Pendefisian Struktur
sym data;

int main(){
	int jumlah, isym;
	cout << endl;
	cout << "Input Data Pelanggan" << endl;
	cout << "Jumlah pelanggan : "; cin >> jumlah;
	// Input Data
	for (isym=1; isym<=jumlah; isym++){
		cout << endl;
		cout << "Nama Pelanggan Toko          : "; cin >> data.nama[isym];
		cout << "Alamat Pelanggan Toko        : "; cin >> data.alamat[isym];
		cout << "Umur Pelanggan Toko          : "; cin >> data.umur[isym];
		cout << "Jenis Kelamin Pelanggan[L/P] : "; cin >> data.kelamin[isym];
		cout << "Nomer Telepon Pelanggan      : "; cin >> data.telp[isym];
		cout << endl;
	}
	// Menampilkan data
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "                Data Pelanggan Toko               " << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "| Nama | Alamat | Umur | Kelamin | Nomer Telepon |" << endl;
	cout << "--------------------------------------------------" << endl;
	for(isym=1; isym<jumlah+1; isym++)
	{
		cout << setw(5) << data.nama[isym] << setw(10) << data.alamat[isym] << setw(10) << data.umur[isym];
		cout << setw(10) << data.kelamin[isym] << setw(10) << data.telp[isym] << setw(10);
		cout << endl;
	}
	cout << "--------------------------------------------------" << endl;
	cout << endl;
	cin.get();
}