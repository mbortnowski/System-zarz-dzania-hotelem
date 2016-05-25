#include <string>
using namespace std;

#ifndef __Platnosc_h__
#define __Platnosc_h__

// #include "Rezerwacja.h"

class Rezerwacja;
class Platnosc;

class Platnosc
{
	private: int _iD;
	private: Date _data;
	private: int _numer_konta;
	private: string _typ;
	public: Rezerwacja* _dokonuje;
};

#endif
