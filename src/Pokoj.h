#include <string>
#include <vector>
using namespace std;

#ifndef __Pokoj_h__
#define __Pokoj_h__

#include "Rezerwacja.h"
#include "Pracownik_sluzby_pieter.h"
// #include "Typ_pokoju.h"

class Rezerwacja;
class Pracownik_sluzby_pieter;
class Typ_pokoju;
class Pokoj;

class Pokoj
{
	private: int _iD;
	private: int _numer;
	private: int _pietro;
	private: string _opis;
	private: bool _status;
	public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;
	public: std::vector<Pracownik_sluzby_pieter*> _obs³uguje;
	public: Typ_pokoju* _cechuje;
};

#endif
