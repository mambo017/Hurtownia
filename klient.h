#include"adres.h"

class Klient{
    string imie;
    string nazwisko;
    Adres adresKlienta;
    string nip;
    string numerTel;

public:
    Klient();
    Klient(string, string, Adres, string, string);

    void setImie(string);
    void setNazwisko(string);
    void setAdres(Adres);
    void setNip(string);
    void setNumerTel(int);
    void wyswietlDaneKlienta();

    string getImie();
    string getNazwisko();
    Adres getAdres();
    string getNip();
    string getNumerTel();

};
