#include<iostream>
#include "Daire.h"
#include<string.h>
using namespace std;

	Daire::Daire(string &ad, string &soyad, int osayi, int mkare, double vsfiyati, float vsorani,double dsfiyati,float dsorani)
	{
		setdaireSatisFiyati(dsfiyati);
		setdaireKomisyonOrani(dsorani);
	}
	void Daire setDaireSatisFiyati(double dsfiyati)
	{
		daireSatisFiyati= dsfiyati;
	}
	void Daire setDaireKomisyonOrani(double dsfiyati)
	{
		daireKomisyonOrani= dsorani;
	}
	double Daire::getDaireSatisFiyati()
	{
		return daireSatisFiyati;
	}
	float Daire::getDaireKomisyonOrani()
	{
		return daireKomisyonOrani;
	}
	void Daire::dairesatisKazancyaz()
	{
		return daireSatisFiyati*daireKomisyonOrani;
	}
