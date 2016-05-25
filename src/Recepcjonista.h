#include <exception>
#include <vector>
using namespace std;

#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Rezerwacja.h"

class Rezerwacja;
class Recepcjonista;

class Recepcjonista
{
	private: int _iD;
	private: String _imie;
	private: String _nazwisko;
	private: int _telefon;
	public: std::vector<Rezerwacja*> _obs³uguje;

	public: void przegladaj_pokoje();

	public: void przegladaj_rezerwacje();

	public: void przegladaj_klientow();

	public: bool dodaj_klienta();

	public: bool dodaj_rezerwacje();

	public: bool edytuj_rezerwacje(int aId_rezerwacji);

	public: bool usun_rezerwacje(int aId_rezerwacji);

	public: int oblicz_koszt_rezerwacji(int aId_rezerwacji);
};

#endif
