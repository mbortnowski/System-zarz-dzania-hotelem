#pragma once
#ifndef POKOJ_H
#define POKOJ_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class Pokoj {

private:
	static int current_id;

	int ID;
	int Numer;
	int Pietro;
	string Opis;
	bool Status;

public:
	Pokoj ();
	Pokoj (int N, int P, string O, bool S);
	void get();
	int getID();
	int getF();
};
#endif