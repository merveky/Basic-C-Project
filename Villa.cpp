#include<iostream>
#include "Villa.h"
#include<string.h>
using namespace std;


	Villa::Villa(string &ad, string &soyad, int osayi, int mkare, double vsfiyati, float vsorani)
	{
		setvillasatisFiyati(sfiyati);
		setvillaKomisyonOrani(sorani);
	}
	void Villa::setVillaSatisFiyati(double sfiyati)
	{
		villasatisFiyati=vsfiyati;
	}
	void Villa::setVillaKomisyonOrani(float vsorani)
	{
		villaKomisyonOrani=vsorani;
	}
	double Villa::getVillaSatisFiyati()
	{
		return villasatisFiyati;
	}
	float Villa::getVillaKomisyonOrani()
	{
		return villaKomisyonOrani;
	}
	void Villa::villasatisKazancyaz()
	{
		return villasatisFiyati*satisKomisyonOrani;
	}
