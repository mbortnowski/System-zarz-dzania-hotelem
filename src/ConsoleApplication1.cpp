// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	srand(time(NULL)); //TESTOWE

	int ster = 1; unsigned int cid;
	string h;


	vector <Klient *> ListaKlientow;
	vector <Pokoj *> ListaPokoi;

	vector <Recepcjonista> ListaPracownikow;

	Recepcjonista test("Micha³","Bortnowski",789456321); //TESTOWY RECEPCJONISTA

	Pokoj * P;
	Klient * K;
	
	//LOSUJ 1-30 (rand() % 30)+1;


	cout << "*************" << endl;
	cout << "*** HOTEL ***" << endl;
	cout << "*************" << endl << endl;
	system("pause");


	//MENU G£ÓWNE

	do {

		system("cls");


		cout << "1. Dodaj klienta" << endl;
		cout << "2. Dodaj pokoj" << endl;
		cout << "3. Dodaj rezerwacje do klienta" << endl;
		cout << "4. Dodaj klient + rezerwacja" << endl;
		cout << "5. Wyswietl pokoje" << endl;
		cout << "6. Wyswietl klientow" << endl;
		cout << "7. Wyswietl rezerwacje" << endl;
		cout << "8. Przeglaj rezerwacje klienta" << endl;
		cout << "9. Wyswietl pokoje na pietrze" << endl;
		cout << "10. Znajdz klienta (ID)" << endl;
		cout << "11. Znajdz klienta (imie, nazwisko)" << endl;
		cout << "12. Znajdz pokoj (ID)" << endl;
		cout << "13. Znajdz rezerwacje(ID)" << endl;
		cout << "14. Zamelduj goscia (ID)" << endl;
		cout << "15. Potwierdz rezerwacje goscia" << endl;
		cout << "16. Logowanie" << endl;
		cout << "17. Dodaj 30 testowych pokoi" << endl;
		cout << "18. Dodaj 30 testowych klientow" << endl;
		cout << "19. Dodaj rezerwacje testowe (wymagane: opcja 17 i 18 oraz brak innych rezerwacji)" << endl;
		cout << "0. Zakoncz" << endl;



		cout << "Wybierz akcje: ";
		cin >> ster;
		system("cls");

		switch (ster)
		{
		case 1:
			K = new Klient();
			ListaKlientow.push_back(K);
			break;

		case 2:
			P = new Pokoj();
			ListaPokoi.push_back(P);
			break;

		case 3:
			cout << "Podaj ID klienta: ";
			cin >> cid;
			if (cid + 1 > ListaKlientow.size()) { break; }
			ListaKlientow[cid]->Dodaj_rezerwacje();
			break;

		case 4:
			K = new Klient();
			K->Dodaj_rezerwacje();
			K->Przegladaj_rezerwacje();
			break;

		case 5:
			test.Przegladaj_pokoje(ListaPokoi);
			break;

		case 6:
			test.Przegladaj_klientow(ListaKlientow);
			break;

		case 7:
			test.Przegladaj_rezerwacje(ListaKlientow);
			system("pause");
			break;

		case 8:
			cout << "Podaj ID klienta: ";
			cin >> cid;
			if (cid + 1 > ListaKlientow.size()) { break; }
			ListaKlientow[cid]->Przegladaj_rezerwacje();
			system("pause");
			break;

		case 9:
			cout << "Podaj pietro: ";
			cin >> cid;
			if (cid + 1 > ListaPokoi.size()) { break; }
			test.Znajdz_pokoj2(ListaPokoi, cid);
			break;

		case 10:
			test.Znajdz_klienta(ListaKlientow);
			break;

		case 11:
			test.Znajdz_klienta2(ListaKlientow);
			break;

		case 12:
			cout << "Podaj ID pokoju: ";
			cin >> cid;
			if (cid + 1 > ListaPokoi.size()) { break; }
			test.Znajdz_pokoj(ListaPokoi, cid);
			break;

		case 13:
			cout << "Podaj ID klienta: ";
			cin >> cid;
			if (cid + 1 > ListaKlientow.size()) { break; }
			cout << "Podaj haslo: ";
			cin >> h;
			ListaKlientow[cid]->Logowanie(cid, h);
			break;

		case 14:
			cout << "Podaj ID goscia: ";
			cin >> cid;
			if (cid + 1 > ListaKlientow.size()) { break; }
			ListaKlientow[cid]->zamelduj();
			break;

		case 15:
			cout << "Podaj ID klienta: ";
			cin >> cid;
			int rid;
			if (cid + 1 > ListaKlientow.size()) { break; }
			cout << "Podaj ID rezerwacji: ";
			cin >> rid;
			ListaKlientow[cid]->Potwierdz_rezerwacje(rid);
			break;

		case 16:
			cout << "Podaj ID rezerwacji: ";
			cin >> cid;
			if (ListaKlientow.size() == 0) { break; }
			test.Znajdz_rezerwacje(ListaKlientow, cid);
			system("pause");
			break;

		case 17:
			for (unsigned int K = 0; K < 30; K++)
			{
				P = new Pokoj(K, (K % 3) + 1, "Pokoj", true);
				ListaPokoi.push_back(P);
			}
			break;

		case 18:
			for (unsigned int g = 0; g < 30; g++)
			{
				struct tm DZ = { 0,0,0,0,0,0 };
				K = new Klient("Test", "Testowy", "ul testowa", 1111111 * g, 0, DZ, "Haslo", "test sp zoo");
				ListaKlientow.push_back(K);
			}
			break;
			
		case 19:
			if (ListaKlientow.size()<5) { break; }

			for (unsigned int hx = 1; hx < 6; hx++)
			{
				struct tm DR = { 0,0,0,1,0,2016-1900 };
				struct tm DZ = { 0,0,0,10,0,2016-1900 };

				int randomize=(rand() % 30) + 1;

				ListaKlientow[randomize]->Dodaj_rezerwacje(DR, DZ);
				ListaKlientow[randomize]->Dodaj_pokoje(ListaPokoi,hx);

			}
			system("pause");
			break;

		case 0:
			cout << "Zapraszamy ponownie." << endl;
			break;

		default:
			cout << "Nie rozpoznano polecenia." << endl;
			system("pause");
			break;

		}
	} while (ster != 0);

	return 0;
}