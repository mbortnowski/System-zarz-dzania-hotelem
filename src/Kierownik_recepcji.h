#pragma once
#ifndef KIEROWNIK_RECEPCJI_H
#define KIEROWNIK_RECEPCJI_H

#include "stdafx.h"
#include <iostream>
#include "string.h"
#include <ctime>
using namespace std;

class Kierownik_recepcji {

private:
	static int current_id;

	int ID;
	string Imie;
	string Nazwisko;
	int Telefon;

public:

	bool Wystaw_fakture(int id_rezerwacji);
	bool Przegladaj_platnosci(int id_rezerwacji);

	Kierownik_recepcji();
	Kierownik_recepcji( string I, string N, int T );
	
};

#endif