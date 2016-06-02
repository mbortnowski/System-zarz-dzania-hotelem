// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int ster = 1;

	//Kierownik_recepcji Pierwszy = Kierownik_recepcji();


	vector <Klient *> ListaKlientow;
	vector <Pokoj> ListaPokoi;

	vector <Recepcjonista> ListaPracownikow;

	Klient * K;

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

