#include <iostream>
using namespace std;

int maxsym = 6, front = 0, back = 0;
string SYAM[6];

bool isFullsym(){
    if(back == maxsym){
        return true;
    } else {
        return false;
    }
}

bool isEmptysym(){
    if(back == 0){
        return true;
    } else {
        return false;
    }
}

void enqueuesym(string data){
    if(isFullsym()){
        cout << "Antrian Penuh!!" << endl;
    } else{
        if(isEmptysym()){
            SYAM[0] = data;
            front++;
            back++;
        } else{
            SYAM[back] = data;
            back++;
        }
    }
}

void dequeuesym(){
    if(isEmptysym()){
        cout << "Antrian Kosong!!" << endl;
    } else{
        for(int i=0; i<back; i++){
            SYAM[i] = SYAM[i+1];
        }
        back--;
    }
}

void destroysym(){
    if(isEmptysym()){
        cout << "Antrian Kosong!!" << endl;
    } else{
        for(int i=0; i<maxsym; i++){
            if(back > 1){
                SYAM[back-1] = "";
                back--;
            } else if(back == 1){
                SYAM[back-1] = "";
                back = 0;
                front = 0;
            }
        }
    }
}

void displaysym(){
    if(isEmptysym()){
        cout << "Antrian kosong!!" << endl;
    } else{
        for(int i=0; i<maxsym; i++){
            if(SYAM[i] != ""){
                cout << SYAM[i] << " ";
            } else{
                cout << "";
            }
        }
    }
    cout <<"\n";
}

//soal a
void soalA(){
    destroysym();
    enqueuesym("Maemo");
    enqueuesym("Symbian");
    enqueuesym("Windows");
    enqueuesym("Iphone");
    enqueuesym("Maemo 4");
    displaysym();
}

//soal b
void soalB(){
    destroysym();
    enqueuesym("Maemo");
    enqueuesym("Symbian");
    enqueuesym("Mac");
    enqueuesym("Windows");
    enqueuesym("Windows Mobile");
    displaysym();
}

//soal c
void soalC(){
    destroysym();
    enqueuesym("Symbian");
    enqueuesym("Java Midlet");
    enqueuesym("Mac");
    enqueuesym("Windows");
    enqueuesym("Iphone");
    displaysym();
}

//soal d
void soalD(){
    destroysym();
    enqueuesym("Symbian");
    enqueuesym("Mac");
    enqueuesym("Lion OS X");
    enqueuesym("Windows");
    enqueuesym("Iphone");
    displaysym();
}

//soal e
void soalE(){
    destroysym();
    enqueuesym("Symbian");
    enqueuesym("Mac");
    enqueuesym("Windows");
    enqueuesym("Iphone");
    enqueuesym("Android");
    displaysym();
}

int main(){
    cout << "========================" << endl;
    cout << "     === QUEUE ====     " << endl;
	cout << "========================" << endl;
    enqueuesym("Maemo");
    enqueuesym("Symbian");
    enqueuesym("Mac");
    enqueuesym("Windows");
    enqueuesym("Iphone");
    displaysym();
    cout << "========================" << endl;
    cout << endl;
    cout << "Soal A -- \n";
    soalA();
    cout << endl;
    cout << "Soal B -- \n";
    soalB();
    cout << endl;
    cout << "Soal C -- \n";
    soalC();
    cout << endl;
    cout << "Soal D -- \n";
    soalD();
    cout << endl;
    cout << "Soal E -- \n";
    soalE();
    cout << endl;
    cout << "========================" << endl;
}