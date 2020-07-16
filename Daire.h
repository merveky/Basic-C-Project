#ifndef DAIRE_H
#define DAIRE_H
#include<string.h>
#include "Ev.h"

class Daire : public Ev
{
	private:
			double daireSatisFiyati;
			float daireKomisyonOrani;
	public:
			Daire(double daireSatisFiyati =0.0,float daireKomisyonOrani=0.0);
			
			void setDaireSatisFiyati(double);
			double getDaireSatisFiyati();
			
			void setDaireKomisyonOrani(float);
			float getDaireKomisyonOrani();
			void dairesatisKazancyaz();

};

#endif
