#include "hurt_bud.h"
#include <iostream>
#include <string>

void Hurt_budowlana::wyswietlDaneHurtowni()
{
    cout<<"Hurtownia o nazwie: "<< nazwa<<endl;
    Siec_hurtowni::wyswietlDaneHurtowni();
}

Hurt_budowlana::Hurt_budowlana(){}

Hurt_budowlana::Hurt_budowlana(string nh, string np, int tel): nazwa(nh),Siec_hurtowni(np, tel){
    //cout<<"dziala konstruktor klasy hurt_bud z arg"<<endl;
}

void Hurt_budowlana::setNazwa(string nh){nazwa= nh;}

string Hurt_budowlana::getNazwa() {return nazwa;}

void Hurt_budowlana::wyswietlListeKlientow() {
    if (listaKlientow.size() == 0) {
        cout<< "Lista klientow hurtowni jest pusta!!" <<endl;
    }
    else {
        for (unsigned i=0; i<listaKlientow.size(); i++) {
            cout<<i+1<<". ";
            listaKlientow[i].wyswietlDaneKlienta();
            cout<<endl;
        }
    }
}

void Hurt_budowlana::dodajKlienta() {
    string imie, nazwisko, nip, ulica, numerDomu, miasto, kod, numerTelefonu;

    cout<< "Dodawanie klienta hurtowni: "<<endl;
    cout<< "Podaj imie: "<<endl;
    cin>> imie;
    cout<< "Podaj nazwisko: "<<endl;
    cin>> nazwisko;
    cout<< "Podaj ulice: "<<endl;
    cin>> ulica;
    cout<< "Podaj numer domu: "<<endl;
    cin>> numerDomu;
    cout<< "Podaj miasto: "<<endl;
    cin>> miasto;
    cout<< "Podaj kod pocztowy: "<<endl;
    cin>> kod;
    cout<<"Podaj numer nip: "<<endl;
    cin>>nip;
    cout<<"Podaj numer telefonu: "<<endl;
    cin>>numerTelefonu;

    Adres adres = Adres(ulica,numerDomu,miasto,kod);
    Klient kl = Klient(imie, nazwisko, adres, nip, numerTelefonu);
    listaKlientow.push_back(kl);

}

void Hurt_budowlana::wyswietlListeTowarow() {
    if (listaTowarow.size() == 0) {
        cout<< "Lista towarow hurtowni jest pusta!!" <<endl;
    }
    else {
        for (unsigned i=0; i<listaTowarow.size(); i++) {
            cout<<i+1<<". ";
            listaTowarow[i].wyswietlTowar();
            cout<<endl;
        }
    }
}

void Hurt_budowlana::dodajTowar() {
    string nazwaTowaru;

    cout<< "Dodawanie towaru hurtowni: "<<endl;
    cout<< "Podaj nazwe towaru: "<<endl;
    cin.sync();
    getline(cin, nazwaTowaru);

    Towar t1 = Towar(nazwaTowaru);
    listaTowarow.push_back(t1);

}

