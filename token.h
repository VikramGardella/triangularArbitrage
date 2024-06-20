#ifndef TOKEN_H
#define TOKEN_H

#include <cstdlib>
#include <vector>
#include <iostream>
#include "conversion.h"

using namespace std;

class conversion;

class token {
public:
    // Constructor
    token(string n);

    // Accessors
    string getName();
    vector<conversion> getPaths();

    // Mutators
    void setName(string newName);
    
    //Misc. Functions
    void addPath(conversion newConv);


private:
    // Private Member Variables
    string name;
    vector<conversion> paths;

};

#endif // TOKEN_H
