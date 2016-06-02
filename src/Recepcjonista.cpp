
#include "stdafx.h"
#include "Recepcjonista.h"

int Recepcjonista::current_id=0;

void Recepcjonista::Przegladaj_pokoje(vector <Pokoj> Pokoje) {
	// TODO - implement Recepcjonista::Przegladaj_pokoje
	throw "Not yet implemented";
}

void Recepcjonista::Przegladaj_rezerwacje(vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Przegladaj_rezerwacje
	throw "Not yet implemented";
}

void Recepcjonista::Przegladaj_klientow(vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Przegladaj_klientow
	throw "Not yet implemented";
}

bool Recepcjonista::Dodaj_rezerwacje(vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Dodaj_rezerwacje
	throw "Not yet implemented";
}

bool Recepcjonista::Edytuj_rezerwacje(int id_rezerwacji, vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Edytuj_rezerwacje
	throw "Not yet implemented";
}

int Recepcjonista::Oblicz_koszt_rezerwacji(int id_rezerwacji, vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Oblicz_koszt_rezerwacji
	throw "Not yet implemented";
}

bool Recepcjonista::Dodaj_klienta(vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Dodaj_klienta
	throw "Not yet implemented";
}

bool Recepcjonista::Usun_rezerwacje(int id_rezerwacji, vector <Klient> Lista) {
	// TODO - implement Recepcjonista::Usun_rezerwacje
	throw "Not yet implemented";
}
#include "Recepcjonista.h"
Recepcjonista::Recepcjonista() {
	string I, N;
	int T;

	cout << "Podaj imie:";
	cin >> I;
	cout << "Podaj nazwisko:";
	cin >> N;
	cout << "Podaj telefon:";
	cin >> T;

	Imie = I;
	Nazwisko = N;
	Telefon = T;
	ID = current_id++;


}
Recepcjonista::Recepcjonista(string I,string N, int T) {
	Imie = I;
	Nazwisko = N;
	Telefon = T;
	ID = current_id++;

}
