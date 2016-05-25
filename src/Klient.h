class Klient {

private:
	int ID;
	string Imie;
	String Nazwisko;
	String Adres;
	int Telefon;
	boolean Zameldowany;
	Date Data_zameldowania;
	string Haslo;

public:
	void Przegladaj_pokoje();

	boolean Logowanie(int id_klienta, String haslo);

	boolean Potwierdz_rezerwacje(int id_rezerwacji);

	boolean Dodaj_rezerwacje();
};
