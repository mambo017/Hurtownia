#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>


std::vector<Hurt_budowlana> listaHurtowni;
Hurt_budowlana hb = Hurt_budowlana();
/*
Hurt_budowlana h1("Centrala Gdansk","13-14-15-16",111222333);
Hurt_budowlana h2("Odzial Gdynia","10-11-12-119",555222333);
Hurt_budowlana h3("Odzial Reda","17-114-12-107",444888333);

listaHurtowni.push_back(h1);
listaHurtowni.push_back(h2);
listaHurtowni.push_back(h3); */

void pokazMenu()
{
    cout<<"----------MENU-------------"<<endl;
    cout<<endl;
    cout<< "1. Wyswietl dane hurtowni"<<endl;
    cout<< "2. Dodaj hurtownie"<<endl;
    cout<< "3. Dodaj klienta"<<endl;
    cout<< "4. Wyswietl liste klientow"<<endl;
    cout<< "5. Wyjscie"<<endl;
    cout<<endl;
}
/*
void dodAdresu()
{
    Adres a1("Lipowa", "122B", "Gdansk","55-155");
    a1.showAdres();
    Adres a2;
    a2.showAdres();
}*/

void wyswietlanieDanych()
{
    for (int i=0; i<listaHurtowni.size();i++){
        listaHurtowni[i].wyswietlDaneHurtowni();
        cout<<endl;
    }
}

void dodajHurtownie()
{
    string tmpUl, tmpN, tmpM, tmpK, tmpNazwa, tmpX;
    int tmpTel;

    cout<< "Dodawanie hurtowni: "<<endl;
    cout<< "podaj nazwe ulicy: ";
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

    switch (wybor)
    {
    case 1:
        cout<<endl;
        wyswietlanieDanych();
        break;
    case 2:
        dodajHurtownie();
        break;

    case 3:
        hb.dodajKlienta();
        break;

    case 4:
        hb.wyswietlListeKlientow();
        cout<< "==========="<<endl;
        break;

    case 5:
        exit(0);
    default:
    cout<<"nie ma takiej opcji. Podaj liczbe z menu!!"<<endl;


    }
}

