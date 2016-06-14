
#include "stdafx.h"
#include "Recepcjonista.h"

int Recepcjonista::current_id=1;

void Recepcjonista::Przegladaj_pokoje(vector <Pokoj *> Pokoje) {

	for (unsigned int ik = 0; ik < Pokoje.size(); ik++)
	{
		Pokoje[ik]->get();
	}
	system("pause");
}

void Recepcjonista::Przegladaj_rezerwacje(vector <Klient *> Lista) {
	for (unsigned int ik = 0; ik < Lista.size(); ik++)
	{
		Lista[ik]->getRes();
	}
}

void Recepcjonista::Przegladaj_klientow(vector <Klient *> Lista) {
	for (unsigned int ik = 0; ik < Lista.size(); ik++)
	{
		Lista[ik]->get();
	}
	system("pause");
}

bool Recepcjonista::Dodaj_rezerwacje(vector <Klient *> Lista) {
	// TODO - implement Recepcjonista::Edytuj_rezerwacje
	throw "Not yet implemented";
}

bool Recepcjonista::Edytuj_rezerwacje(int id_rezerwacji, vector <Klient *> Lista) {
	// TODO - implement Recepcjonista::Edytuj_rezerwacje
	throw "Not yet implemented";
}

int Recepcjonista::Oblicz_koszt_rezerwacji(int id_rezerwacji, vector <Klient *> Lista) {
	// TODO - implement Recepcjonista::Oblicz_koszt_rezerwacji
	throw "Not yet implemented";
}

void Recepcjonista::Dodaj_klienta(vector <Klient *> Lista) {

	Klient * K;
	K = new Klient();
	Lista.push_back(K);
	
}

bool Recepcjonista::Usun_rezerwacje(int id_rezerwacji, vector <Klient *> Lista) {
	// TODO - implement Recepcjonista::Usun_rezerwacje
	throw "Not yet implemented";
}

void Recepcjonista::Znajdz_klienta(vector <Klient *> Lista) {
	if (Lista.size() == 0)return;


	int cID;
	cout << "Podaj ID:";
	cin >> cID;


	if (cID + 1 > Lista.size()) { return; }

	if (Lista[cID]->getID() == cID ) {
		Lista[cID]->get();
		system("pause");
		return;
	}

	for (unsigned int K = 0; K < Lista.size(); K++)
	{
		if (Lista[K]->getID() == cID) {
			Lista[K]->get();
			system("pause");
			return;
		}
	}

	cout << "Brak Klienta" << endl;
}
void Recepcjonista::Znajdz_klienta2(vector <Klient *> Lista) {

	if (Lista.size() == 0)return;

	string I2,N2;
	cout << "Podaj imie:";
	cin >> I2;
	cout << "Podaj nazwisko:";
	cin >> N2;


	for (unsigned int K = 0; K < Lista.size(); K++)
	{
		if ((Lista[K]->getFName() == I2)&& (Lista[K]->getLName() == N2)) {
			Lista[K]->get();
		}
	}
	system("pause");
}

void Recepcjonista::Znajdz_pokoj(vector <Pokoj *> Pokoje,int rID) {
	for (unsigned int K = 0; K < Pokoje.size(); K++)
	{
		if (Pokoje[K]->getID() == rID) {
			Pokoje[K]->get();
			system("pause");
			return;
		}
	}
	cout << "Nie znaleziono pokoju." << endl;
}

void Recepcjonista::Znajdz_pokoj2(vector <Pokoj *> Pokoje, int rID) {
	for (unsigned int K = 0; K < Pokoje.size(); K++)
	{
		if (Pokoje[K]->getF() == rID) {
			Pokoje[K]->get();
		}
	}
	system("pause");
}


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
