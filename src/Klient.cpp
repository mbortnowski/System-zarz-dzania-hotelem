

#include "stdafx.h"
#include "Klient.h"
#include <assert.h> 

int Klient::current_id=1;

void Klient::Przegladaj_pokoje() {
	// TODO - implement Klient::Przegladaj_pokoje
	throw "Not yet implemented";
}

bool Klient::Logowanie(int id_klienta, string haslo) {
	// TODO - implement Klient::Logowanie
	throw "Not yet implemented";
}

bool Klient::Potwierdz_rezerwacje(int id_rezerwacji) {
	// TODO - implement Klient::Potwierdz_rezerwacje
	throw "Not yet implemented";
}

bool Klient::Dodaj_rezerwacje() {
	// TODO - implement Klient::Dodaj_rezerwacje
	throw "Not yet implemented";
}

Klient::Klient() {

	ID = current_id++;
	string i, n, a, h, f;
	int t;
	int z;
	struct tm dz;

	cout << "Podaj Haslo:";
	cin >> h;
	//assert(cin.fail());

	cout << "Imie: ";
	cin >> i;
	//assert(cin.fail());

	cout << "Nazwisko: ";
	cin >> n;
	//assert (cin.fail());

	cout << "Adres: ";
	cin >> a;
	//assert (cin.fail());

	cout << "Firma: ";
	cin >> f;
	//assert ( cin.fail() );

	cout << "Telefon: ";
	cin >> t;
	assert( cin.fail() && t > 99999);

	cout << "Zameldowany(1) Niezameldowany(0) :";
	cin >> z;
	if (z == 1) { 
		Zameldowany = true;
		int d, m, y;
		cout << "Dzien: ";
		cin >> d;
		cout << "Miesiac: ";
		cin >> m;
		cout << "Rok: ";
		cin >> y;

		assert (d>0&&d<32);
		assert(m>-1 && d<12);
		assert(y>0);

		dz = { 0,0,0,d,m-1,y-1900 }; 
	}
	else {
		Zameldowany = false;
		dz = { 0,0,0,0,0,0 }; 
	}

	Imie = i;
	Nazwisko = n;
	Haslo = h;
	Adres = a;
	Firma = f;
	Telefon = t;
	Data_zameldowania = dz;
	
	cout << "Dodano klienta";


}

Klient::Klient(string I, string N, string A, int T, bool Z, tm DZ, string H, string F) {
	ID = current_id++;
	Imie = I;
	Nazwisko = N;
	Adres = A;
	Telefon = T;
	Zameldowany = Z;
	if (Z == true) {
		Data_zameldowania = DZ;
	}
	else
	{
		Data_zameldowania= { 0,0,0,0,0,0 };
	}
	Haslo=H;
	Firma = F;
};

void Klient::get() {

	cout << "ID: " << ID << endl;
	cout << "Imie: " << Imie << endl;
	cout << "Nazwisko: " << Nazwisko << endl;

	if (Zameldowany) {
		cout << "Data zameldowania(yyyy/mm/dd): " << Data_zameldowania.tm_year + 1900 << "/" << Data_zameldowania.tm_mon + 1 << "/" << Data_zameldowania.tm_mday << endl ;
	}

	cout << "Adres: " << Adres << endl;
	cout << "Telefon: " << Telefon << endl;
	cout << "Firma: " << Firma << endl;
	cout << "Zameldowany: " << Zameldowany << endl;
	cout << "-------------" << endl;



	//cout << "Haslo: " << Haslo << endl;
	
}

int Klient::getID() {
	return ID;
};
void Klient::getRes() {
	for (unsigned int ik = 0; ik < Rezerwacje.size(); ik++)
	{
		cout << "ID klienta:" << ID<<endl;
		Rezerwacje[ik].get();
	}
	system("pause");
}