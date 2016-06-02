#include "stdafx.h"
#include "Kierownik_recepcji.h"

int Kierownik_recepcji::current_id = 0;

bool Kierownik_recepcji::Wystaw_fakture(int id_rezerwacji) {
	// TODO - implement Kierownik_recepcji::Wystaw_fakture
	return (false);
}

bool Kierownik_recepcji::Przegladaj_platnosci(int id_rezerwacji) {
	// TODO - implement Kierownik_recepcji::Przegladaj_platnosci
	return (false);
}

Kierownik_recepcji::Kierownik_recepcji() {
	string i, n;
	int t;

	cout << "Imie: " ;
	cin >> i;
		
	cout << "Nazwisko: ";
	cin >> n;

	cout << "Telefon: " ;
	cin >> t;

	Imie = i;
	Nazwisko = n;
	Telefon = t;
	ID = current_id;
	current_id++;

	//cout << "ID: " << ID << endl;
	//cout << "Imie: " << Imie << endl;
	//cout << "Nazwisko: " << Nazwisko << endl;
	//cout << "Telefon: " << Telefon << endl;

}

Kierownik_recepcji::Kierownik_recepcji(string I, string N, int T) {
	Imie = I;
	Nazwisko = N;
	Telefon = T;
	ID = current_id++;

	//cout << "ID: " << ID << endl;
	//cout << "Imie: " << Imie << endl;
	//cout << "Nazwisko: " << Nazwisko << endl;
	//cout << "Telefon: " << Telefon << endl;
}
