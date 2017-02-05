#include <iostream>
#include "adres.h"
#include "siec_hurtowni.h"
#include "hurt_bud.h"
#include "funkcje_menu.h"
using namespace std;



int main(){
    for(;;)
    {
        pokazMenu();
        wybieranie();
    }




    //listaKlientow.wyswietlDaneKlienta();
    //wybieranie();
    return 0;

   /* Hurt_budowlana hb = Hurt_budowlana();
    hb.dodajKlienta();
    hb.wyswietlListeKlientow();
    cout<< "==========="<<endl;
    hb.dodajKlienta();
    hb.wyswietlListeKlientow();
    return 0; */
}




/*
{

    dodAdresu();

    pokazMenu();




    Adres a1("Lipowa", "122B", "Gdansk","55-155");
    /*cout << "Hello world!" << endl;
    Siec_hurtowni objekt1("11-22-33-44",999999999);
    objekt1.setAdres(a1);
    cout << "Wyswietlam dane hurtowni" << endl;
    objekt1.wyswietlDaneHurtowni();

    Siec_hurtowni objekt2("24-55-66-33",555666777);
    objekt2.wyswietlDaneHurtowni();
    cout<< "==========="<<endl;
    cout<<"NIP:"<<objekt1.getNip()<<" numer tel: "<< objekt2.getNumer_tel()<<endl;



    Hurt_budowlana h1("Centrala Gdansk","13-14-15-16",111222333);
    h1.setAdres(a1);
    Hurt_budowlana h2("Odzial Gdynia","10-11-12-119",555222333);
    Hurt_budowlana h3("Odzial Reda","17-114-12-107",444888333);

    Hurt_budowlana lista[3];
    lista[0] = h1;
    lista[1] = h2;
    lista[2] = h3;

    for (int i=0; i<3;i++){
        lista[i].wyswietlDaneHurtowni();
        cout<<endl;
    }
    /*
    cout<<"==========proba dodania hurtowni=========="<<endl;
    dodaj();
    cout<<"koniec"<<endl;
    cout<< h1.getNazwa();
    */


