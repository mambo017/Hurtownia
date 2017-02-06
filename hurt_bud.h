#pragma once
#include <vector>
#include "adres.h"
#include "siec_hurtowni.h"
#include "klient.h"
#include "towar.h"

class Hurt_budowlana : public Siec_hurtowni { //dziedziczenie publiczne

    string nazwa;
    std::vector<Klient> listaKlientow;
    std::vector<Towar> listaTowarow;


public:

    Hurt_budowlana();
    Hurt_budowlana(string,string, int);

    void wyswietlListeKlientow();

    void dodajKlienta();

    void wyswietlListeTowarow();
    void dodajTowar();

    void wyswietlDaneHurtowni();

    void setNazwa(string);

    string getNazwa();


};
