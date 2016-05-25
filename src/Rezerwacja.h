#include <vector>
using namespace std;

#ifndef __Rezerwacja_h__
#define __Rezerwacja_h__

#include "Recepcjonista.h"
// #include "Klient.h"
#include "Pokoj.h"
// #include "Platnosc.h"

class Recepcjonista;
class Klient;
class Pokoj;
class Platnosc;
class Rezerwacja;

class Rezerwacja
{
	private: int _iD;
	private: Date _data_start;
	private: Date _data_stop;
	private: int _koszt;
	private: bool _potwierdzenie;
	private: int _ilosc_pokoi;
	public: std::vector<Recepcjonista*> _obs³uguje;
	public: Klient* _sk³ada;
	public: std::vector<Pokoj*> _unnamed_Pokoj_;
	public: Platnosc* _dokonuje;
};

#endif
