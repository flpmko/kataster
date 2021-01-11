#include "Register.h"

Register::Register()
{
}

void Register::pridaj(Nehnutelnost& novaNehnutelnost)
{
	this->pocetNehnutelnosti++;
	Nehnutelnost** novyZoznam = new Nehnutelnost * [this->pocetNehnutelnosti];

	//do noveho zoznamu nakopirujem stary (preto -1)
	for (int i = 0; i < this->pocetNehnutelnosti - 1; i++)
	{
		novyZoznam[i] = this->zoznam[i];
	}

	//na posledne miseto vlozim novu nehnutelnost
	novyZoznam[this->pocetNehnutelnosti - 1] = &novaNehnutelnost;
	
	//vymazem povodny zoznam
	for (int i = 0; i < this->pocetNehnutelnosti - 2; i++)
	{
		delete this->zoznam[i];
	}
	delete[] this->zoznam;

	//do zoznamu priradim pomocny zoznam
	this->zoznam = novyZoznam;
}

void Register::vyrad(Nehnutelnost& staraNehnutelnost)
{
	this->pocetNehnutelnosti--;
	Nehnutelnost** novyZoznam = new Nehnutelnost * [this->pocetNehnutelnosti];

	//do noveho zoznamu nakopirujem stary
	int index = 0;
	for (int i = 0; i < this->pocetNehnutelnosti; i++)
	{
		if (this->zoznam[i] != &staraNehnutelnost)
		{
			novyZoznam[index++] = this->zoznam[i];
		}
	}

	//vymazem povodny zoznam
	/*for (int i = 0; i < this->pocetNehnutelnosti + 1; i++)
	{
		delete this->zoznam[i];
	}*/
	delete[] this->zoznam;

	//do zoznamu priradim pomocny zoznam
	this->zoznam = novyZoznam;
}

void Register::vypis()
{
	for (int i = 0; i < this->pocetNehnutelnosti; i++)
	{
		this->zoznam[i]->vypis();
	}
}

Register::~Register()
{
}
