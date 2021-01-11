#include "Nehnutelnost.h"
#include "Register.h"
#include <iostream>
#define _CRT_SECURE_NO_DEPRECATE

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Nehnutelnost byt1((char*)"Fatranska 20", 3103, 164.28);
	Nehnutelnost byt2((char*)"Kvacalova 14", 2345, 634.98);
	//byt.vypis();

	Register zoznam;
	zoznam.pridaj(byt1);
	zoznam.pridaj(byt2);
	zoznam.vypis();

	cout << "-------------------------" << endl;

	zoznam.vyrad(byt2);
	zoznam.vypis();

	return 0;
}