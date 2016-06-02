#pragma once
#ifndef PRACOWNIK_SLUZBY_PIETER_H
#define PRACOWNIK_SLUZBY_PIETER_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Pracownik_sluzby_pieter {

private:
	int ID;
	string Imie;
	string Nazwisko;
	int Telefon;

public:
	bool Zmien_status_pokoju(int id_pokoju);

	Pracownik_sluzby_pieter();
};
#endif