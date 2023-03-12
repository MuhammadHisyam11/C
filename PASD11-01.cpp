/*
    Nama    : Muhammad Hisyam
    NPM     : 4520210026
    Matkul  : ASD B
    Tugas   : Prak Modul 11 Nomor 1
*/

#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

struct Transport
{
    char KotaAwal[20];
    char KotaAkhir[20];
    int jarak;
    char skip;
};
struct stack 
{
    char KotaAwal[20];
    char KotaAkhir[20];
    int Jrk;
};
struct Transport Bus[MAX];
struct stack btstack[MAX];
int Buspos = 0;
int Findpos = 0;
int Tos;
void setup()
void route(char *KotaAkhir)
void inbus(char *KotaAwal, char *KotaAkhir, int Jarak)
void push(char *KotaAwal, char *KotaAkhir, int Jrk)
void pop(char *KotaAwal, char *KotaAkhir, int Jrk)
void isbus(char *KotaAwal, char *KotaAkhir)
int find (char *KotaAwal, char *Anywhere);
int match (char *KotaAwal, char *KotaAkhir);

int main()
{
    char KotaAwal[20], KotaAkhir[20];
    int isbus[20], route[20];
    cout << " Masukkan Perjalanannya = " << endl;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
    cout << " Dari  : "; cin >> KotaAwal;
    cout << " Ke    : "; cin >> KotaAkhir;
    isbus(KotaAwal, KotaAkhir);
    route (KotaAkhir);
    cin.get();
}

setup(char *inbus)
{
    inbus("Jakarta", "Jogyakarta", 650);
    inbus("Jakarta", "Semarang", 450);
    inbus("Jakarta", "Malang", 850);
    inbus("Jogyakarta", "Malang", 300);
    inbus("Semarang", "Surabaya", 450);
    inbus("Semarang", "Jogyakarta", 75);
    inbus("Semarang", "Banyuwangi", 750);
    inbus("Malang", "Madiun", 250);
    inbus("Malang", "Nganjuk", 300);
    inbus("Malang", "Sidoardjo", 30);
}

inbus(char *KotaAwal, char *KotaAkhir, int Jarak, int Jrk)
{
    if (Buspos < MAX)
    {
        strcpy(Bus[Buspos].KotaAwal, KotaAwal);
        strcpy(Bus[Buspos].KotaAkhir, KotaAkhir);
        Bus[Buspos].jarak = Jrk;
        Bus[Buspos].skip = 0;
        Buspos++;
    }
    else
    cout << " DataBase Penuh " << endl;
}

isbus(char *KotaAwal, char *KotaAkhir, int Jrk, int push, int *anywhere, int pop)
{
    int d, jarak;
    char anywhere[20];
    if (d=match(KotaAwal, KotaAwal))
    {
        push(KotaAwal, KotaAkhir, d);
        return 0;
    }
    if (jarak = find(KotaAwal, anywhere)
    {
        push(KotaAwal, KotaAkhir, jarak);
        isbus(anywhere, KotaAkhir);
    }
    else
    {
        if (Tos > 0)
        {
            pop (KotaAwal, KotaAkhir, &Jrk);
            isbus(KotaAwal, KotaAkhir);
        }
    }
}

find(char *KotaAwal, char *anywhere, char *KotaAkhir)
{
    Findpos = 0;
    while (Findpos < Buspos)
    {
        if (! strcmp(Bus[Findpos].KotaAwal, KotaAwal) && !strcmp(Bus[Findpos].skip, skip)
        {
            strcmp(anywhere, Bus[Findpos].KotaAkhir, KotaAkhir);
            Bus[Findpos].skip = 1;
            return bus[Findpos].Jarak;
        }
        Findpos++;
    }
    return 0;
}

push(char *KotaAwal, char *KotaAkhir, int top)
{
    if(top < MAX)
    {
        strcpy(btstack[Tos].KotaAwal, KotaAwal);
        strcpy(btstack[Tos].KotaAkhir, KotaAkhir);
        Bus[Tos].jarak = Jrk;
        Tos++;
    }
    else
    cout << " Stack Kosong !!!" << endl;
}

route(char *KotaAkhir)
{
    int Jrk, t;
    Jrk = 0;
    t = 0;
    while(t<Tos)
    {
        cout << " Tujuan " << btstack[t].KotaAwal << endl;
        Jrk +=btstack[t].Jrk;
        t++;
    }
    cout << KotaAkhir << endl;
    cout << Jrk << endl;
}