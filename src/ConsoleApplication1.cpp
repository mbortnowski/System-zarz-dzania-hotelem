// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int ster = 1;

	//Kierownik_recepcji Pierwszy = Kierownik_recepcji();


	vector <Klient *> ListaKlientow;
	vector <Pokoj *> ListaPokoi;

	vector <Recepcjonista> ListaPracownikow;

	Recepcjonista test("Micha³","Bortnowski",789456321);

	Pokoj * P;
	Klient * K;
	
	//////////////////////////////POKOJE TESTOWE
	for (unsigned int K = 0; K < 30; K++)
	{
		P = new Pokoj(K,(K%3)+1,"Pokoj",true);
		ListaPokoi.push_back(P);
	}
	//////////////////////////////KLIENCI TESTOWI
	for (unsigned int g = 0; g < 30; g++)
	{
		struct tm DZ = { 0,0,0,0,0,0 };
		K = new Klient ("Test","Testowy","ul testowa",1111111*g, 0, DZ,"Haslo","test sp zoo");
		ListaKlientow.push_back(K);
	}


	test.Przegladaj_pokoje(ListaPokoi);

	test.Przegladaj_klientow(ListaKlientow);
	Rezerwacja Res;


	system("pause");







	//MENU G£ÓWNE

	do{

		system("cls");

		cout << "Wybierz akcje: ";
		cin >> ster;

		switch (ster)
		{
		case 1:

			K =new Klient();
			ListaKlientow.push_back(K);

			break;
		case 2:
			//TODO
			break;


		case 0:
			cout << "Zapraszamy ponownie." << endl;
			break;

		default:
			cout << "Nie rozpoznano polecenia" << endl;
			
			break;

		}
	} while (ster != 0);

    return 0;
}

