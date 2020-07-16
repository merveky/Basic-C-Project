#include <iostream>
#include <string.h>
#include "Ev.h"
#include "Villa.h"
using namespace std;

int main() 
{
	Ev x("Merve", "Kaya", 3, 200);
	Villa y(900.000, 0.02);
	Daire z(300.000, 0.01);
	
	cout<<"------KAZANC BILGILERI------"<<endl;
	cout<<"Calisanin Adi:"<<x.getAd()<<"Calisanin Soyadi:"<<x.getSoyad()<<"Oda Sayisi:"<<x.OdaSayisi<<"Evin Metrekaresi;"<<x.getMetreKare();<<endl;
	<<"Villanin Satis Fiyati:"<<y.getvillasatisFiyati()<<endl;<<"Satis Komisyon Orani:"<<y.getvillaKomisyonOrani()<<endl;
	<<"Dairenin Satis Fiyati:"<<z.getdaireSatisFiyat()<<"Daire Satis Komisyon Orani:"<<z.getdaireKomisyonOrani()<<endl;
	
	cout<<x.getAd()<<x.getSoyad()<<"Villa Satisindan Kazanciniz="<<y.villasatisKazancyaz();<<endl;
	<<"Daire Satisindan Kazanciniz="<<z.dairesatisKazancyaz()<<endl;
	
	return 0;
}
