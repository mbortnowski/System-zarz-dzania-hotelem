class Recepcjonista {

private:
	int ID;
	String Imie;
	String Nazwisko;
	int Telefon;

public:
	void Przegladaj_pokoje();

	void Przegladaj_rezerwacje();

	void Przegladaj_klientow();

	boolean Dodaj_klienta();

	boolean Dodaj_rezerwacje();

	boolean Edytuj_rezerwacje(int id_rezerwacji);

	boolean Usun_rezerwacje(int id_rezerwacji);

	int Oblicz_koszt_rezerwacji(int id_rezerwacji);

	Recepcjonista();
};
