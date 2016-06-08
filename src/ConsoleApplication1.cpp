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

	Pokoj * P;
	Klient * K;
	
	//////////////////////////////POKOJE TESTOWE
	for (unsigned int K = 0; K < 30; K++)
	{
		P = new Pokoj(K,(K%3)+1,"Pokoj",true);
		ListaPokoi.push_back(P);
	}
	for (unsigned int ik = 0; ik < ListaPokoi.size(); ik++)
	{
		ListaPokoi[ik]->get();
	}
	system("pause");

	
	for (unsigned int j = 0;j < 1; j++)
	{
		K = new Klient();
		ListaKlientow.push_back(K);
	}

	system("pause");
	system("cls");

	for (unsigned int ij = 0; ij < ListaKlientow.size(); ij++)
	{
		ListaKlientow[ij]->get();
	}

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

