#pragma once
#ifndef REZERWACJA_H
#define REZERWACJA_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Rezerwacja {

private:
	int ID;
	struct tm Data_start;
	struct tm Data_stop;
	int Koszt;
	string Potwierdzenie;

public:
	Rezerwacja();
};
#endif