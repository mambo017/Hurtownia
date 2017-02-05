#include <iostream>
#include"adres.h"
#include"siec_hurtowni.h"

void Siec_hurtowni :: wyswietlDaneHurtowni()
{
    cout << "Hurtownia Budowlana "<< endl;
    cout << "Adres Hurtowni:" <<endl;
    cout << "Ulica: " << adres.getUlica() << " "<< adres.getNumer() << endl;
    cout << "Miasto: " << adres.getMiasto() << endl;
    cout << "Kod: " << adres.getKod() << endl;
    cout << "NIP: " << nip << endl;
    cout << "numer tel. "<< numer_tel << endl;
}
Siec_hurtowni::Siec_hurtowni()
{
    nip = "NA";
    numer_tel = 111111111;
}

Siec_hurtowni::Siec_hurtowni(string ni, int n_t):nip (ni), numer_tel (n_t){}

void Siec_hurtowni::setAdres(Adres a) {adres = a;}
void Siec_hurtowni::setNip(string ni) {nip = ni;}
void Siec_hurtowni::setNumer_tel(int n_t) {numer_tel = n_t;}

Adres Siec_hurtowni::getAdres() {return adres;}
string Siec_hurtowni::getNip() {return nip;}
int Siec_hurtowni::getNumer_tel() {return numer_tel;}
