#pragma once
#ifndef PLATNOSC_H
#define PLATNOSC_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Platnosc {

private:
	int ID;
	struct tm Data;
	int Numer_konta;
	string Typ;

public:
	Platnosc();
};
#endif
