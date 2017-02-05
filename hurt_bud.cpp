#include "hurt_bud.h"
#include <iostream>

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
            listaKlientow[i].wyswietlDaneKlienta();
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

/*void Hurt_budowlana::dodaj()
{
    string tmpUl, tmpN, tmpM, tmpK;
    string tmpNazwa;
    string tmpNip;
    int tmpTel;

    cout<< "Dodawanie hurtowni: "<<endl;
    cout<< "podaj nazwê ulicy: "<<endl;
    cin>> tmpUl;
    cout<< "numer budynku: "<<endl;
    cin>> tmpN;
    cout<< "kod pocztowy: "<<endl;
    cin>> tmpK;
    cout<< "miasto: "<<endl;
    cin>> tmpM;
    cout<<"nazwa hurtowni/oddzia³u: "<<endl;
    cin>> tmpNazwa;
    cout<<"numer nip: "<<endl;
    cin>>tmpNip;
    cout<<"numer telefonu: "<<endl;
    cin>>tmpTel;

    Adres tmp(tmpUl, tmpN, tmpK, tmpM);
    Hurt_budowlana nowa(tmpNazwa, tmpNip, tmpTel);
    nowa.setAdres(tmp);
    nowa.wyswietlDaneHurtowni();
}
*/
