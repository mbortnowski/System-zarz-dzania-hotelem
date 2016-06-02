#pragma once
#ifndef TYP_POKOJU_H
#define TYP_POKOJU_H

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Typ_pokoju {

private:
	int ID;
	int Miejsc;
	int Cena;
	string Opis;

public:
	Typ_pokoju();
};
#endif