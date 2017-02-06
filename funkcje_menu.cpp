#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "funkcje_menu.h"
#include "hurt_bud.h"


std::vector<Hurt_budowlana> listaHurtowni;
Hurt_budowlana hb = Hurt_budowlana();

void pokazMenu()
{
    cout<<endl;
    cout<<"----------MENU-------------"<<endl;
    cout<<endl;
    cout<< "1. Dodaj hurtownie"<<endl;
    cout<< "2. Wyswietl liste hurtowni"<<endl;
    cout<< "3. Dodaj klienta"<<endl;
    cout<< "4. Wyswietl liste klientow"<<endl;
    cout<< "5. Dodaj towar"<<endl;
    cout<< "6. Wyswietl liste towarow"<<endl;
    cout<< "7. Wyjscie"<<endl;
    cout<<endl;
}

void wyswietlanieDanych()
{
    if (listaHurtowni.size() == 0) {
        cout<< "Lista hurtowni jest pusta!!" <<endl;
    }
    else {

        for (int i=0; i<listaHurtowni.size();i++){
            cout<<i+1<<". ";
            listaHurtowni[i].wyswietlDaneHurtowni();
            cout<<endl;
        }
    }
}

void dodajHurtownie()
{
    string tmpUl, tmpN, tmpM, tmpK, tmpNazwa, tmpX;
    int tmpTel;

    cout<< "Dodawanie hurtowni: "<<endl;
    cout<< "Ulica: ";
    cin.sync();
    getline(cin, tmpUl);
    cout<< "numer budynku: ";
    cin>> tmpN;
    cout<< "miasto: ";
    cin>> tmpM;
    cout<< "kod pocztowy: ";
    cin>> tmpK;
    cout<<"nazwa hurtowni/oddzialu: ";
    cin.sync();
    getline(cin, tmpNazwa);
    cout<<"numer nip: ";
    cin>> tmpX;
    cout<<"numer telefonu: ";
    cin>> tmpTel;
    cout<<endl;

    Adres tmp(tmpUl, tmpN, tmpM, tmpK);
    Hurt_budowlana nowa(tmpNazwa, tmpX, tmpTel);
    nowa.setAdres(tmp);
    listaHurtowni.push_back(nowa);

    //nowa.wyswietlDaneHurtowni();
}
void wybieranie()
{
    int wybor;
    cout<< "Wybierz numer z menu:"<<endl;
    cin>> wybor;
    cout<<endl;

    switch (wybor)
    {
    case 1:
        dodajHurtownie();
        break;
    case 2:
        cout<<endl;
        wyswietlanieDanych();
        break;

    case 3:
        hb.dodajKlienta();
        break;

    case 4:
        hb.wyswietlListeKlientow();
        cout<< "==========="<<endl;
        break;

    case 5:
        hb.dodajTowar();
        break;

    case 6:
        hb.wyswietlListeTowarow();
        cout<< "==========="<<endl;
        break;
    case 7:
        exit(0);
    default:
    cout<<"nie ma takiej opcji. Podaj numer opcji z menu!!"<<endl;


    }
}
