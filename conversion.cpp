#include "conversion.h"
#include "token.h"
#include <iostream>
#include <cstdlib>

using namespace std;

    // Constructor(s)
    conversion :: conversion(string t, double r, token* end){
        ticker = t;
        rate = r;
        endProduct = end;
    }

    // Accessors
    string conversion :: getTicker(){return ticker;}
    double conversion :: getRate(){return rate;}
    token* conversion :: getEndProduct(){return endProduct;}

    // Mutators
    void conversion :: setTicker(string newTicker){ticker = newTicker;}
    void conversion :: setRate(double newRate){rate = newRate;}
    void conversion :: setEndProduct(token* newEnd){endProduct = newEnd;}

