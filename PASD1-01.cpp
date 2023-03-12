/*
	Nama 	: Muhammad Hisyam
	NPM 	: 4520210026
	Matkul 	: ASD B
	Tugas 	: Prak ASD B
*/
#include <iostream>
#include <String>
using namespace std;

int main()
{
	struct SYAM
	{
		string nama;
		string alamat;
		string pekerjaan;
		string berlaku;
		string nomor;
		int tinggi, lahir;
	};
	SYAM Data_MK;
	Data_MK.nama = " Muhammad Hisyam ";
	Data_MK.alamat = " Villa Pabuaran Indah ";
	Data_MK.pekerjaan = " Pelajar/Mahasiswa ";
	Data_MK.tinggi = 185 ;
	Data_MK.lahir = 2002 ;
	Data_MK.nomor = "1221190606701" ;
	Data_MK.berlaku = " 11-03-2024 ";
	cout << endl;
	cout << endl;
	cout << " Program Membuat SIM " << endl;
	cout << " Nama 			= " << Data_MK.nama << endl;
	cout << " Alamat 		= " << Data_MK.alamat << endl;
	cout << " Pekerjaan 	= " << Data_MK.pekerjaan << endl;
	cout << " Tinggi 		= " << Data_MK.tinggi << endl;
	cout << " Tahun Lahir 	= " << Data_MK.lahir << endl;
	cout << " Nomor SIM 	= " << Data_MK.nomor << endl;
	cout << " Berlaku s/d 	= " << Data_MK.berlaku << endl;
	cin.get();
}