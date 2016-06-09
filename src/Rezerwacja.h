#pragma once
#ifndef REZERWACJA_H
#define REZERWACJA_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "Pokoj.h"
using namespace std;

class Rezerwacja {

private:
	static int current_id;
	int ID;
	struct tm Data_start;
	struct tm Data_stop;
	int Koszt;
	bool Potwierdzenie;

	vector < Pokoj > Pokoje;

public:
	Rezerwacja();
	Rezerwacja(struct tm start, struct tm stop);
	void get();
};
#endif