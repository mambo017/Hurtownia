#pragma once
#include <vector>
#include "adres.h"
#include "siec_hurtowni.h"
#include "klient.h"

class Hurt_budowlana : public Siec_hurtowni { //dziedziczenie publiczne

    string nazwa; //odziedziczy atrybuty i metode wyswietlDaneHurtowni
    std::vector<Klient> listaKlientow;


public:
    //void dodajHurtownie();

    Hurt_budowlana();
    Hurt_budowlana(string,string, int);

    void wyswietlListeKlientow();

    void dodajKlienta();

    //void usunKlienta();
    //void edytujKlienta();

    void wyswietlDaneHurtowni();

    void setNazwa(string);

    string getNazwa();


};
