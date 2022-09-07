#pragma once
#include<iostream>

class insan {
private: 
	std::string isim;
	int yas;
public:
	insan();
	insan(std::string, int);
	void setIsim(std::string);
	std::string  getIsim();
	void setYas(int);
	int getYas();
	void printİnsan (); 
};

class hesap : public insan {
private:
	int hesapBakiyesi; 
public:
	hesap();
	hesap(int,std::string,int);
	void setHesap(int);
	int getHesap();
	void printHesap();
	void yatirHesap(int);
	void cekHesap(int);
	 
};
