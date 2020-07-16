#include<iostream>
#include "Ev.h"
#include<string.h>
using namespace std;
 	Ev::public Ev(const string &ad, const string &soyad, int osayi,int mkare)
	{
		setAd(ad);
		setSoyad(soyad);
		setOdaSayisi(osayi);
		setMetreKare(mkare);
	}
	void Ev::setAd( const string &ad )
	{
 		Ad = ad; 
 	} 
 	void Ev::setSoyad( const string &soyad )
	{
 		Soyad =soyad; 
 	} 
 	void Ev::setOdaSayisi( int osayi )
	{
 		OdaSayisi= osayi; 
 	} 
 	void Ev::setMetreKare(int mkare )
	{
 		MetreKare= mkare; 
 	} 
 	string Ev::getAd()
	{
		return Ad;
	} 
	string Ev::getSoyad()
    {
    	return Soyad;
	}
	int Ev::getOdaSayisi()
	{
		return OdaSayisi;
	}
	int Ev::getMetreKare()
	{
		return MetreKare;
	}
	
