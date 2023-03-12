//LIFO/STACK - Menggunakan metode Linked list
#include <iostream>
using namespace std;

struct SYAM{
    char huruf;
    SYAM *prev, *next;
};

SYAM *head, *tail, *cur, *newNode, *del;
int maxdata = 10;

void createsym(char huruf){
    head = new SYAM();
    head -> huruf = huruf;
    head -> prev = NULL;
    head -> next = NULL;
    tail = head;
}

int countsym(){
    if(head == NULL){
        return 0;
    }
    else{
        int banyak = 0;
        cur = head;
        while (cur != NULL){
            cur = cur -> next;
            banyak++;
        }
        return banyak;
    }
}

void pushsym(char huruf){
    if(countsym() == maxdata){
        cout << "FULL!!" << endl;
    } else{
        if(countsym() == 0){
           createsym(huruf);
        } else{
            newNode = new SYAM();
            newNode -> huruf = huruf;
            newNode -> prev = tail;
            tail -> next = newNode;
            newNode -> next = NULL;
            tail = newNode;
        }
    }
}

void popsym(){
    del = tail;
    tail = tail -> prev;
    tail -> next = NULL;
    delete del;
}

void displaysym(){
    if(countsym() == 0){
        cout << "DATA KOSONG!!" << endl;
    } else{
        cur = tail;
        while (cur != NULL){
            cout << "Huruf : " << cur -> huruf << endl;
            cur = cur -> prev;
        }
    }
}

void destroysym(){
    cur = head;
    while(cur != NULL){
        del = cur;
        head = head -> next;
        delete del;
        cur = cur -> next;
    }
}

//soal a
void soalA(){
    popsym();
    popsym();
    pushsym('D');
    pushsym('B');
    pushsym('C');
    displaysym();
    cout << endl;
}

//soal b
void soalB(){
    popsym();
    pushsym('E');
    pushsym('C');
    displaysym();
    cout << endl;
}

//soal c
void soalC(){
    destroysym();
    pushsym('F');
    pushsym('D');
    pushsym('E');
    displaysym();
    cout << endl;
}

//soal d
void soalD(){
    popsym();
    popsym();
    pushsym('A');
    pushsym('D');
    pushsym('B');
    pushsym('E');
    pushsym('C');
    displaysym();
    cout << endl;
}

int main(){
    cout << "========================" << endl;
    cout << "     === STACK ====     " << endl;
	cout << "========================" << endl;
    pushsym('A');
    pushsym('B');
    pushsym('C');
    displaysym();
    cout << "========================" << endl;
    cout << endl;
    cout << "Soal A -- \n";
    soalA();
    cout << "Soal B -- \n";
    soalB();
    cout << "Soal C -- \n";
    soalC();
    cout << "Soal D -- \n";
    soalD();
    cout << "========================" << endl;
}