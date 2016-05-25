#include <exception>
#include <vector>
using namespace std;

#ifndef __Pracownik_sluzby_pieter_h__
#define __Pracownik_sluzby_pieter_h__

#include "Pokoj.h"

class Pokoj;
class Pracownik_sluzby_pieter;

class Pracownik_sluzby_pieter
{
	private: int _iD;
	private: String _imie;
	private: String _nazwisko;
	private: int _telefon;
	public: std::vector<Pokoj*> _obs³uguje;

	public: bool zmien_status_pokoju(string aInt_1);
};

#endif
