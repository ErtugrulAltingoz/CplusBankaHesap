#include <iostream>
using namespace std;
#include "account.h"



void  main()
{
    insan insan1("Ertugrul Altingoz", 25);
    insan1.printİnsan();
    hesap hesap1(10000, "Ertugrul Altingoz", 25);
    hesap1.printHesap();
    cout << "\n";
    hesap1.cekHesap(3000);
    hesap1.printHesap();
    cout << "\n";
    hesap1.cekHesap(8000);
    hesap1.printHesap();
    cout << "\n";
    hesap1.yatirHesap(1000);
    hesap1.printHesap();
}

