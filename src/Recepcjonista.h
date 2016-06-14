#pragma once
#ifndef RECEPCJONISTA_H
#define RECEPCJONISTA_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "Klient.h"

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

	void Dodaj_klienta(vector <Klient *> Lista);

	bool Dodaj_rezerwacje(vector <Klient *> Lista);

	bool Edytuj_rezerwacje(int id_rezerwacji, vector <Klient *> Lista);

	bool Usun_rezerwacje(int id_rezerwacji,vector <Klient *> Lista);

	int Oblicz_koszt_rezerwacji(int id_rezerwacji, vector <Klient *> Lista);

	void Znajdz_klienta (vector <Klient *> Lista);
	void Znajdz_klienta2 (vector <Klient *> Lista);

	void Znajdz_pokoj(vector <Pokoj *> Pokoje, int rID);
	void Znajdz_pokoj2(vector <Pokoj *> Pokoje, int p);
	Recepcjonista();
	Recepcjonista(string I, string N, int T);
};
#endif