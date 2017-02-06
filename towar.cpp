#include<iostream>
#include "towar.h"

using namespace std;

Towar::Towar()
{
    nazwaTowaru = "NA";
}

Towar::Towar(string nt): nazwaTowaru(nt){}

void Towar:: wyswietlTowar()
{
    cout << "------------------"<< endl;
    cout << "Towar: "<< nazwaTowaru << endl;
    cout << "------------------"<< endl;
}

void Towar::setNazwaTowaru(string nt) {nazwaTowaru = nt;}

string Towar::getNazwaTowaru() {return nazwaTowaru;}

