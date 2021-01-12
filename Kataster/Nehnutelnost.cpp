#include "Nehnutelnost.h"
#include <string>
#include <iostream>

Nehnutelnost::Nehnutelnost()
{
}

Nehnutelnost::Nehnutelnost(char* paAdresa, int paCislo, float paRozloha)
{
	if (paAdresa != nullptr && (paCislo && paRozloha != 0))
	{
		this->adresa = new char[strlen(paAdresa)+1];
		strcpy(this->adresa, paAdresa);
		this->cislo = paCislo;
		this->rozloha = paRozloha;
	}
}

Nehnutelnost::Nehnutelnost(const Nehnutelnost& zdroj)
{
	if (this != &zdroj)
	{
		this->adresa = new char[strlen(zdroj.adresa) + 1];
		strcpy(this->adresa, zdroj.adresa);
		this->cislo = zdroj.cislo;
		this->rozloha = zdroj.rozloha;
	}
}

Nehnutelnost& Nehnutelnost::operator=(const Nehnutelnost& zdroj)
{
	if (this != &zdroj)
	{
		Nehnutelnost::~Nehnutelnost();

		this->adresa = new char[strlen(zdroj.adresa) + 1];
		strcpy(this->adresa, zdroj.adresa);
		this->cislo = zdroj.cislo;
		this->rozloha = zdroj.rozloha;
	}
	return *this;
}

void Nehnutelnost::vypis()
{
	printf("Adresa: %s\n", this->adresa);
	printf("Cislo: %d\n", this->cislo);
	printf("Rozloha: %.2f\n", this->rozloha);
}

Nehnutelnost::~Nehnutelnost()
{
	delete[] adresa;
}
