#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
using namespace std;

void BUAT_SIMPUL(int x);
void AWAL();
void CETAK();
void INSERTKANAN();

struct SYAM{ 
	int INFO;
	struct SYAM *LINK;
};

typedef struct SYAM sym;
sym *P, *FIRST, *LAST, *Q;
int x;
int main(){
	int a[9] = {22, 23, 53, 66, 27, 75, 36, 45};
	int i;
	FIRST = NULL; 
	i = 0;
	x = a[i];
	BUAT_SIMPUL(x);
	AWAL();
	for(i=1; i<=8; i++){
		x = a[i];
		BUAT_SIMPUL(x);
		INSERTKANAN();
	}
	cout << " Nilai sebelum dilakukan insert kanan : ";
	CETAK();
	x = 66;
	BUAT_SIMPUL(x);
	INSERTKANAN(); 
	cout << endl;
	cout << " Nilai setelah dilakukan insert kanan : ";
	CETAK();
	cout << endl;
	cin.get();
}

void BUAT_SIMPUL(int x){ 
	P = (sym*) malloc(sizeof(sym));
	if(P != NULL){
		P -> INFO = x;
	}
	else {
		cout << "Pembuatan simpul tidak berhasil" << endl;
		cin.get();
		exit(1);
	}
}

void AWAL(){
	FIRST = P;
	LAST = P;
	P -> LINK = NULL;
}

void INSERTKANAN(){ 
	LAST -> LINK = P;
	LAST = P;
	P -> LINK = NULL;
}

void CETAK(){
	int x;
	Q = FIRST;
	while(Q != NULL){
		x = Q -> INFO;
		cout << " " << x;
		Q = Q -> LINK;
	}
}