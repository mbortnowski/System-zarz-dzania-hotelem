#include <vector>
using namespace std;

#ifndef __Typ_pokoju_h__
#define __Typ_pokoju_h__

#include "Pokoj.h"

class Pokoj;
class Typ_pokoju;

class Typ_pokoju
{
	private: int _iD;
	private: int _miejsc;
	private: int _cena;
	private: String _opis;
	public: std::vector<Pokoj*> _cechuje;
};

#endif
