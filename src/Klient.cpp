

#include "stdafx.h"
#include "Klient.h"
#include <assert.h> 

int Klient::current_id=1;

void Klient::Przegladaj_pokoje() {
	// TODO - implement Klient::Przegladaj_pokoje
	throw "Not yet implemented";
}

bool Klient::Logowanie(int id_klienta, string haslo) {

	if ((id_klienta == ID) && (haslo == Haslo)) { 
		cout << "Logowanie udane" << endl;
		system("pause");
		return true;
	}
	else
	{
		cout << "Logowanie nieudane"<< endl;
		system("pause");
		return false;
	}
}

bool Klient::Potwierdz_rezerwacje(int id_rezerwacji) {

	int cID = id_rezerwacji;



	for (unsigned int K = 0; K < Rezerwacje.size(); K++)
	{
		if (Rezerwacje[K]->getID() == cID) {
			Rezerwacje[K]->Potwierdz_rezerwacje();
			return true;
		}
	}
	cout << "Brak rezerwacji" << endl; 
	return false;
}

bool Klient::Dodaj_rezerwacje() {

	Rezerwacja * R;
	R = new Rezerwacja();

	Rezerwacje.push_back(R);
	

	cout << "Dodano rezerwacje dla klienta o ID " << ID << endl;
	system("pause");


	return true;


	//Warunek o op³aceniu poprzedniej!

}

bool Klient::Dodaj_rezerwacje(struct tm start, struct tm stop) {

	Rezerwacja * R;
	R = new Rezerwacja(start,stop);

	Rezerwacje.push_back(R);
	cout << "Dodano rezerwacje dla klienta o ID " << ID  <<endl;
	return true;


	//Warunek o op³aceniu poprzedniej!

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
	assert(t < 999999999);assert(t > 99999);

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
	
	cout << "Dodano klienta" << endl;


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
		Rezerwacje[ik]->get();
	}
	
}

string Klient::getLName()
{
	return Nazwisko;
}
string Klient::getFName()
{
	return Imie;
}

void Klient::Dodaj_pokoje(vector <Pokoj *> Lista, int id_rezerwacji) {
	
	if (Rezerwacje.size() == 0) { return; };


	for (unsigned int K = 0; K < Rezerwacje.size(); K++)
	{
		if (Rezerwacje[K]->getID() == id_rezerwacji) {
			Rezerwacje[K]->Dodaj_pokoje(Lista);
		}
		else
		{
			cout << "Nie znaleziono rezerwacji" << endl<<endl;
		}
	}

}


void Klient::Przegladaj_rezerwacje(){

	for (unsigned int K = 0; K < Rezerwacje.size(); K++)
	{		
		Rezerwacje[K]->get();
		
	}
	system("pause");
}

bool Klient::zamelduj() {
	if (Zameldowany == false)
	{
		

		int d, m, y;
		cout << "Dzien: ";
		cin >> d;
		cout << "Miesiac: ";
		cin >> m;
		cout << "Rok: ";
		cin >> y;

		assert(d>0 && d<32);
		assert(m>-1 && d<12);
		assert(y>0);
		struct tm dz = { 0,0,0,d,m - 1,y - 1900 };

		Zameldowany = true;
		Data_zameldowania = dz;

		cout << "Zameldowane goscia o ID:" << ID << endl;
		cout << "Data zameldowania(yyyy/mm/dd): " << Data_zameldowania.tm_year + 1900 << "/" << Data_zameldowania.tm_mon + 1 << "/" << Data_zameldowania.tm_mday << endl;
		system("pause");
		return true;

	}
	else
	{
		
		cout << "Gosc o id " << ID << " jest juz zameldowany" << endl;
		system("pause");
		return false;
	}

}