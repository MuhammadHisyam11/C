#include <iostream>
using namespace std;

int n, k, i, x;
int sym[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

void displaySym()
{
    cout << "     ";
    for(int i=0; i<10; i++)
    {
        cout << sym[i] << " ";
    }
    cout << endl;
}

void shellSort()
{
	for(int span=5; span>=1; span-=2)
    {
		for(int mulai=0; mulai<=span-1; mulai++)
        {
			k=mulai+span;
			while(k<=10-span)
            {
				i=k;
				x = sym[i];
				while(i>=mulai+span && x < sym[i-span])
                {
					sym[i]=sym[i-span];
					i = i-span;
				}
			    sym[i]= x;
			    k=k+span;
                displaySym();
			}
		}
	}   
}

int main()
{
    cout << "+----------------------------+" << endl;
	cout << "|        Shell  Sort         |" << endl;
	cout << "+----------------------------+" << endl;
    displaySym();
    cout << "------------------------------" << endl;
	cout << " Proses Shell Sort.......     " << endl;
	cout << "------------------------------" << endl;
	shellSort();
	cout << "------------------------------" << endl;
	cin.get();
}