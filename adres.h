#pragma once
#include<string>
using namespace std;

class Adres{
    string ulica;
    string numer;
    string miasto;
    string kod;

public:
    Adres();
	Adres(string, string, string, string);

    void pokazAdres();
	void setUlica(string);
	void setNumer(string);
	void setMiasto(string);
	void setKod(string);

	string getUlica();
	string getNumer();
	string getMiasto();
	string getKod();
};
