#ifndef CONVERSION_H
#define CONVERSION_H

#include <cstdlib>
#include <iostream>
#include "token.h"

using namespace std;

class token;

class conversion {
public:
    // Constructor(s)
    conversion(string t, double r, token* end);

    // Accessors
    string getTicker();
    double getRate();
    token* getEndProduct();

    // Mutators
    void setTicker(string newTicker);
    void setRate(double newRate);
    void setEndProduct(token* newEnd);


private:
    // Private Member Variables
    string ticker;
    double rate;
    token* endProduct;

};

#endif // CONVERSION_H
