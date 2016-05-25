#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

#include "Recepcjonista.h"
#include "Rezerwacja.h"

class Recepcjonista;
class Rezerwacja;
class Klient;

class Klient
{
	private: int _iD;
	private: string _imie;
	private: String _nazwisko;
	private: String _adres;
	private: int _telefon;
	private: bool _zameldowany;
	private: Date _data_zameldowania;
	private: string _haslo;
	public: std::vector<Recepcjonista*> _obs³uguje;
	public: std::vector<Rezerwacja*> _sk³ada;

	public: bool logowanie(int aId_klienta, String aHaslo);

	public: bool potwierdz_rezerwacje(int aId_rezerwacji);

	public: void przegladaj_pokoje();

	public: bool dodaj_rezerwacje();
};

#endif
