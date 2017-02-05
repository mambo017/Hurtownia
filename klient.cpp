#include <iostream>
#include"adres.h"
#include"klient.h"

Klient::Klient()
{
    imie = "NA";
    nazwisko = "NA";
    nip = "NA";
    numerTel = "NA";
}
Klient::Klient(string i, string n, Adres adres, string ni, string nr_Tel):imie(i), nazwisko(n), adresKlienta (adres), nip (ni), numerTel (nr_Tel){}

void Klient :: wyswietlDaneKlienta()
{
    cout << "------------------"<< endl;
    cout << "Dane klienta: "<< endl;
    cout << "Imie: "<< imie << endl;
    cout << "Nazwisko: "<< nazwisko << endl;
    cout << "Adres:" <<endl;
    cout << "Ulica: " << adresKlienta.getUlica() << " "<< adresKlienta.getNumer() << endl;
    cout << "Miasto: " << adresKlienta.getMiasto() << endl;
    cout << "Kod: " << adresKlienta.getKod() << endl;
    cout << "NIP: " << nip << endl;
    cout << "Numer telefonu: "<< numerTel << endl;
    cout << "------------------"<< endl;
}

void Klient::setAdres(Adres a) {adresKlienta = a;}
void Klient::setNip(string ni) {nip = ni;}
void Klient::setNumerTel(int nr_Tel) {numerTel = nr_Tel;}

Adres Klient::getAdres() {return adresKlienta;}
string Klient::getNip() {return nip;}
string Klient::getNumerTel() {return numerTel;}
