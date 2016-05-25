#include <exception>
using namespace std;

#ifndef __Kierownik_recepcji_h__
#define __Kierownik_recepcji_h__

#include "Recepcjonista.h"

// class Recepcjonista;
class Kierownik_recepcji;

class Kierownik_recepcji: public Recepcjonista
{
	private: int _iD;
	private: String _imie;
	private: String _nazwisko;
	private: int _telefon;

	public: bool wystaw_fakture(int aId_rezerwacji);

	public: bool przegladaj_platnosci(int aId_rezerwacji);
};

#endif
