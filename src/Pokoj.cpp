#include "stdafx.h"
#include "Pokoj.h"
#include <ctime>

int Pokoj::current_id = 1;


Pokoj::Pokoj() {
	ID = current_id++;

	int N; int P; string O; int  S;

	cout << "Podaj numer: " ;
	cin >>  N;

	cout << "Podaj pietro: ";
	cin >> P;

	cout << "Podaj Opis: ";
	cin >> O;

	cout << "Dostepny(1) niedostepny(0): ";
	cin >> S;
	if (S == 1) {
		Status = true;
	}
	else {
		Status = false;
	}

	cout << "Utworzono pokoj o id "<<ID<<endl<<endl;

	Numer = N;
	Pietro = P;
	Opis = O;

}
Pokoj::Pokoj(int N, int P, string O, bool S) {
	ID = current_id++;

	Numer=N;
	Pietro=P;
	Opis=O;
	Status=S;


}
void Pokoj::get() {

	
	cout << "ID: " << ID<<endl;
	cout << "Numer:" << Numer << endl;
	cout << "Pietro: " << Pietro << endl;
	cout << "Opis: " << Opis << endl;
	cout << "Status: " << Status << endl;
	cout << "-------------" << endl;

}
int Pokoj::getID() {
	return ID;
};