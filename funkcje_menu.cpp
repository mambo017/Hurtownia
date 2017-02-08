#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "funkcje_menu.h"
#include "hurt_bud.h"
#include "adres.h"

std::vector<Hurt_budowlana> listaHurtowni;
Hurt_budowlana hb = Hurt_budowlana();

Adres a1("Lipowa", "122B", "Gdansk","55-155");
Adres a2("Kasztanowa","110A", "Gdynia", "40-120");

Hurt_budowlana h1("Centrala Gdansk","13-14-15-16",111222333);
h1.setAdres(a1);

Hurt_budowlana h2("Odzial Gdynia","10-11-12-119",555222333);
h2.setAdres(a2);

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
    cout<< "8. Zainiciuj przykladowe hurtownie"<<endl;
    cout<< "9. Wyjscie"<<endl;
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
    cout<< "5. Wyjscie do menu glownego"<<endl;
    cout<<endl;
}

void wyswietlanieListyHurtowni()
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

void wyswietlanieNazwHurtowni()
{

    if (listaHurtowni.size() == 0) {
        cout<< "Lista hurtowni jest pusta!!" <<endl;
    }
    else {

        for (int i=0; i<listaHurtowni.size();i++){
            cout<<i+1<<". ";
            cout<<listaHurtowni[i].getNazwa();
            cout<<endl;
        }
    }

}

/*void zainiciujPrzykladoweHurtownie()
{
    Adres a1("Lipowa", "122B", "Gdansk","55-155");
    Adres a2("Kasztanowa","110A", "Gdynia", "40-120");

    Hurt_budowlana h1("Centrala Gdansk","13-14-15-16",111222333);
    h1.setAdres(a1);

    Hurt_budowlana h2("Odzial Gdynia","10-11-12-119",555222333);
    h2.setAdres(a2);
    listaHurtowni.push_back(h1);
    listaHurtowni.push_back(h2);

}*/
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
        cout<<"+++ Lista hurtowni +++"<<endl;
        cout<<endl;
        wyswietlanieListyHurtowni();
        break;

    case 3:
        hb.dodajKlienta();
        break;

    case 4:
        cout<<"+++ Lista klientow +++"<<endl;
        cout<<endl;
        hb.wyswietlListeKlientow();
        cout<< "==========="<<endl;
        break;

    case 5:
        hb.dodajTowar();
        break;

    case 6:
        cout<<"+++ Lista towarow +++"<<endl;
        cout<<endl;
        hb.wyswietlListeTowarow();
        cout<< "==========="<<endl;
        break;

    case 7:
        cout<<"Do sieci hurtowni naleza:";
        cout<<endl;
        wyswietlanieNazwHurtowni();
        cout<<"Wybierz hurtownie: (numer z listy)";
        cout<<endl;
        cin>> numerHurtowni;
        cout<<endl;
        wybieranieMenuHurtowni(numerHurtowni);
        break;

    case 8:
        cout<<"+++Lista hurtowni+++"<<endl;
        zainiciujPrzykladoweHurtownie()
        {
            listaHurtowni.push_back(h1);
            listaHurtowni.push_back(h2);
        }
        break;

    case 9:
        exit(0);
    default:
    cout<<"nie ma takiej opcji. Podaj numer opcji z menu!!"<<endl;


    }
}

void wybieranieMenuHurtowni(int n)
{
    int wybor;
    bool koniec = false;

    n = n - 1;

    do {

        pokazMenuHurtowni();

        cout<< "Wybierz operacje:"<<endl;
        cin>> wybor;
        cout<<endl;

        switch (wybor)
        {
        case 1:
            cout<<"+++ Lista klientow +++"<<endl;
            cout<<endl;
            listaHurtowni[n].wyswietlListeKlientow();
            break;
        case 2:
            cout<<"+++ Lista towarow +++"<<endl;
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
            koniec = true;
            break;

        default:
        cout<<"nie ma takiej opcji. Podaj numer opcji z menu!!"<<endl;

        }

        cout<< "==========="<<endl;

    } while (!koniec);

}
