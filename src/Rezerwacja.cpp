#include "stdafx.h"
#include "Rezerwacja.h"

int Rezerwacja::current_id = 1;

Rezerwacja::Rezerwacja() {
	ID = current_id++;
	bool pot;
	struct tm start;
	struct tm stop;
	int d, m, y;

	cout << "Dzien rozpoczecia: ";
	cin >> d;
	cout << "Miesiac rozpoczecia: ";
	cin >> m;
	cout << "Rok rozpoczecia: ";
	cin >> y;

	assert(d>0 && d<32);
	assert(m>0 && m<12);
	assert(y>1990);

	start = { 0,0,0,d,m-1,y-1900 };


	cout << "Dzien zakonczenia: ";
	cin >> d;
	cout << "Miesiac zakonczenia: ";
	cin >> m;
	cout << "Rok zakonczenia: ";
	cin >> y;

	assert(d>0 && d<32);
	assert(m>0 && m<13);
	assert(y>1990);

	stop = { 0,0,0,d,m-1,y-1900 };


	time_t a = mktime(&start);
	time_t b = mktime(&stop);
	double difference = difftime(b, a) / (60 * 60 * 24);

	cout << "Data start(yyyy/mm/dd): " << 1900+start.tm_year << "/" << start.tm_mon+1 << "/" << start.tm_mday << endl;
	cout << "Data stop(yyyy/mm/dd): " << 1900+stop.tm_year << "/" << stop.tm_mon+1 << "/" << stop.tm_mday << endl;
	cout << "Ilosc dni: " << difference << endl;

	

	assert( difference > 0);
	Data_start = start;
	Data_stop = stop;

	Koszt = difference;
	Potwierdzenie = false;

	/*
	cout << "Zameldowany(1) Niezameldowany(0) :";
	cin >> pot;
	if (pot == 1) {
		Potwierdzenie = true;
	}
	else {
		Potwierdzenie = false;
	}
	*/

	cout << "Dodano Rezerwacje";
	
}
Rezerwacja::Rezerwacja(struct tm start, struct tm stop) {


	time_t a = mktime(&start);
	time_t b = mktime(&stop);
	double difference = difftime(b, a) / (60 * 60 * 24);

	cout << "Data start(yyyy/mm/dd): " << 1900 + start.tm_year << "/" << start.tm_mon + 1 << "/" << start.tm_mday << endl;
	cout << "Data stop(yyyy/mm/dd): " << 1900 + stop.tm_year << "/" << stop.tm_mon + 1 << "/" << stop.tm_mday << endl;
	cout << "Ilosc dni: " << difference << endl;

	assert(difference< 0);
	Data_start = start;
	Data_stop = stop;
}
void Rezerwacja::get() {

	cout << "ID:"<<ID<<endl;
	cout << "Koszt: " << Koszt <<endl;
	cout << "Potwierdzenie: " << Potwierdzenie << endl;

	time_t a = mktime(&Data_start);
	time_t b = mktime(&Data_stop);
	double difference = difftime(b, a) / (60 * 60 * 24);

	cout << "Data start(yyyy/mm/dd): " << 1900 + Data_start.tm_year << "/" << Data_start.tm_mon + 1 << "/" << Data_start.tm_mday << endl;
	cout << "Data stop(yyyy/mm/dd): " << 1900 + Data_stop.tm_year << "/" << Data_stop.tm_mon + 1 << "/" << Data_stop.tm_mday << endl;
	cout << "Ilosc dni: " << difference << endl;

};