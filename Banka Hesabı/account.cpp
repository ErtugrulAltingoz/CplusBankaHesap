#pragma once
#include"account.h"
#include <iostream>
using namespace std;
insan::insan() {
	cout << "Default constructor cagirildi" << endl;

}
insan::insan(std::string isim, int yas) {
	setYas(yas);
	setIsim(isim);

}
void insan::setIsim(std::string isim) {
	this->isim = isim;
}
std::string insan::getIsim() {
	return isim;
}
int insan::getYas() {
	return yas;
}
void insan::setYas(int yas) {
	if (yas <= 30) this->yas = yas;
	else cerr << "Girilen yas degeri gecersiz" << endl;
}
void insan::printİnsan() {
	cout << "İsim: " << getIsim() << "\n" << "Yas: " << getYas() << endl;
}
hesap::hesap() {

	cout << "Default insan constructor cagirildi" << endl;

}
hesap::hesap(int hesapBakiyesi, std::string isim, int yas) :insan(isim, yas) {
	setHesap(hesapBakiyesi);

}
void hesap::setHesap(int hesapBakiyesi) {
	if (hesapBakiyesi >= 0) this->hesapBakiyesi = hesapBakiyesi;
	else cerr << "Girilen deger gecersizdir" << endl;
}
int hesap::getHesap() {
	return hesapBakiyesi;
}
void hesap::printHesap() {
	printİnsan();
	cout << "Guncel hesap bakiyesi tutari: " << getHesap() << "TL" << endl;

}
void::hesap::yatirHesap(int eklenen) {
	hesapBakiyesi += eklenen;

}
void hesap::cekHesap(int cekilen) {
	if (cekilen <= hesapBakiyesi) hesapBakiyesi -= cekilen;
	else cerr << "Bakiye yetersiz" << endl;
}