#include<iostream>
#include "adres.h"

using namespace std;

void Adres::pokazAdres()
{
    cout <<ulica<<" "<<numer<<" "<<kod<<" "<<miasto<<endl;
}

Adres::Adres()
{
    //cout << "dziala konst klasy adres bez arg"<<endl;
    ulica = "NA";
    numer = "NA";
    kod = "NA";
    miasto = "NA";
}
Adres::Adres(string u, string n, string m, string k)
: ulica(u), numer(n), miasto(m), kod (k){}//cout<<"dziala kon klasy adres z argumentami"<<endl;}

void Adres::setUlica(string u) {ulica = u;}
void Adres::setNumer(string n) {numer = n;}
void Adres::setMiasto(string m) {miasto = m;}
void Adres::setKod(string k) {kod = k;}

string Adres::getUlica() {return ulica;}
string Adres::getNumer() {return numer;}
string Adres::getMiasto() {return miasto;}
string Adres::getKod() {return kod;}
