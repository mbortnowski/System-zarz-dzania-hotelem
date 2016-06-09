#pragma once
#ifndef RECEPCJONISTA_H
#define RECEPCJONISTA_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

class Recepcjonista {

private:
	static int current_id;

	int ID;
	string Imie;
	string Nazwisko;
	int Telefon;

public:
	void Przegladaj_pokoje(vector <Pokoj *> Pokoje);

	void Przegladaj_rezerwacje(vector <Klient * > Lista);

	void Przegladaj_klientow(vector <Klient *> Lista);

	bool Dodaj_klienta(vector <Klient *> Lista);

	bool Dodaj_rezerwacje(vector <Klient *> Lista);

	bool Edytuj_rezerwacje(int id_rezerwacji, vector <Klient *> Lista);

	bool Usun_rezerwacje(int id_rezerwacji,vector <Klient *> Lista);

	int Oblicz_koszt_rezerwacji(int id_rezerwacji, vector <Klient *> Lista);

	Recepcjonista();
	Recepcjonista(string I, string N, int T);
};
#endif