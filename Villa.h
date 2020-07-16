#ifndef VILLA_H
#define VILLA_H
#include "Ev.h"
#include<string.h>
using namespace std;

class Villa : public Ev
{
	private:
			double villasatisFiyati;
			float villaKomisyonOrani;
	public:
			Villa(double villasatisFiyati=0.0,float villaKomisyonOrani =0.0);
			
			void setVillaSatisFiyati(double);
			double getVillaSatisFiyati();
			
			void VillaKomisyonOrani(float);
			float getVillaKomisyonOrani();
			void villasatisKazancyaz();
	
};

#endif
