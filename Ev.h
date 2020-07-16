#ifndef EV_H
#define EV_H
#include<string.h>
using namespace std;
class Ev
{
	private:
		string Ad;
		string Soyad;
		int OdaSayisi;
		int MetreKare;
		
	public:
		Ev( const string &Ad, const string &Soyad, int OdaSayisi= 0, int MetreKare= 0);
		void setAd( const string &ad );
		string getAd() const;
		
		void setSoyad( const string &soyad );
		string getSoyad() const;
		
		void setOdaSayisi(int);
		int getOdaSayisi() const;
		
		void setMetreKare(int);
		int  getMetreKare() const;
		
		void yaz();
	
};

#endif
