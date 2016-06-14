#pragma once
#ifndef KLIENT_H
#define KLIENT_H
//#define NDEBUG 


#include <iostream>
#include <string>
#include <vector>


#include <assert.h> 

#include "Rezerwacja.h"
using namespace std;

class Klient {
private:

	static int current_id;

	int ID;
	string Imie;
	string Nazwisko;
	string Adres;
	int Telefon;
	bool Zameldowany;
	struct tm Data_zameldowania;
	string Haslo;
	string Firma;

	vector < Rezerwacja * > Rezerwacje; //Agregowanie Rezerwacji


public:
	bool Logowanie(int id_klienta, string haslo);
	bool Potwierdz_rezerwacje(int id_rezerwacji);
	void Przegladaj_pokoje();
	void Przegladaj_rezerwacje();
	bool Dodaj_rezerwacje();
	bool Dodaj_rezerwacje(struct tm start, struct tm stop);

	void Dodaj_pokoje(vector <Pokoj *> Lista, int id_rezerwacji);


	Klient();
	Klient(string I, string N, string A, int T, bool Z, tm DZ, string H, string F);

	void get();
	int getID();
	void getRes();

	bool zamelduj();

	string getFName();
	string getLName();
};
#endif