#pragma once
#include "Nehnutelnost.h"

class Register
{
private:
	Nehnutelnost** zoznam = nullptr;
	int pocetNehnutelnosti = 0;
public:
	Register();
	void pridaj(Nehnutelnost& novaNehnutelnost);
	void vyrad(Nehnutelnost& staraNehnutelnost);
	void vypis();
	~Register();
};

