class Kierownik_recepcji : Recepcjonista {

private:
	int ID;
	String Imie;
	String Nazwisko;
	int Telefon;

public:
	boolean Wystaw_fakture(int id_rezerwacji);

	boolean Przegladaj_platnosci(int id_rezerwacji);

	Kierownik_recepcji();
};
