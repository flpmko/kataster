#pragma once
class Nehnutelnost
{
private:
	char* adresa = nullptr;
	int cislo = 0;
	float rozloha = 0.00;
public:
	Nehnutelnost();
	Nehnutelnost(char* paAdresa, int paCislo, float paRozloha);
	Nehnutelnost(const Nehnutelnost& zdroj);
	Nehnutelnost& operator = (const Nehnutelnost& zdroj);
	friend bool operator != (Nehnutelnost& a, Nehnutelnost& b) { return a.cislo != b.cislo; };
	void vypis();
	~Nehnutelnost();
};

