#pragma once
#include"adres.h"

class Siec_hurtowni{
    Adres adres;
    string nip;
    int numer_tel;

public:

    void wyswietlDaneHurtowni();
    Siec_hurtowni();
    Siec_hurtowni(string, int);

    void setAdres(Adres);
    void setNip(string);
    void setNumer_tel(int);

    Adres getAdres();
    string getNip();
    int getNumer_tel();

};
