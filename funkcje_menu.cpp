#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "funkcje_menu.h"
#include "hurt_bud.h"


std::vector<Hurt_budowlana> listaHurtowni;
Hurt_budowlana hb = Hurt_budowlana();

void pokazMenuGlowne()
{
    cout<<endl;
    cout<<"----------MENU GLOWNE-------------"<<endl;
    cout<<endl;
    cout<< "1. Dodaj hurtownie"<<endl;
    cout<< "2. Wyswietl liste hurtowni"<<endl;
    cout<< "3. Dodaj klienta"<<endl;
    cout<< "4. Wyswietl liste klientow"<<endl;
    cout<< "5. Dodaj towar"<<endl;
    cout<< "6. Wyswietl liste towarow"<<endl;
    cout<< "7. Przejdz do menu hurtowni"<<endl;
    cout<< "8. Wyjscie"<<endl;
    cout<<endl;
}

void pokazMenuHurtowni()
{
    cout<<endl;
    cout<<"----------MENU HURTOWNI-------------"<<endl;
    cout<<endl;
    cout<< "1. Wyswietl liste klientow"<<endl;
    cout<< "2. Wyswietl liste towarow"<<endl;
    cout<< "3. Dodaj klienta"<<endl;
    cout<< "4. Dodaj towar"<<endl;
    cout<< "5. Wyjscie"<<endl;
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
    int numerHurtowni;
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
        cout<<"Do sieci hurtowni naleza:";
        cout<<endl;
        wyswietlanieDanych();
        cout<<"Wybierz hurtownie: (numer z listy)";
        cout<<endl;
        cin>> numerHurtowni;
        for(;;) {
            pokazMenuHurtowni();
            wybieranieMenuHurtowni(numerHurtowni);
            cout<< "==========="<<endl;
        }
        break;

    case 8:
        exit(0);
    default:
    cout<<"nie ma takiej opcji. Podaj numer opcji z menu!!"<<endl;


    }
}

void wybieranieMenuHurtowni(int n)
{
    int wybor;
    cout<< "Wybierz operacje:"<<endl;
    cin>> wybor;
    cout<<endl;
    n = n - 1;

    switch (wybor)
    {
    case 1:
        listaHurtowni[n].wyswietlListeKlientow();
        break;
    case 2:
        cout<<endl;
        listaHurtowni[n].wyswietlListeTowarow();
        break;

    case 3:
        listaHurtowni[n].dodajKlienta();
        break;

    case 4:
        listaHurtowni[n].dodajTowar();
        cout<< "==========="<<endl;
        break;

    case 5:
        break;

    default:
    cout<<"nie ma takiej opcji. Podaj numer opcji z menu!!"<<endl;

    }

}
