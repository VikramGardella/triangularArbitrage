#include "token.h"
#include "conversion.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Constructor
token :: token(string n){
    name = n;
    paths = vector<conversion>();
}

// Accessors
string token :: getName(){return name;}
vector<conversion> token :: getPaths(){return paths;}

// Mutators
void token :: setName(string newName){name = newName;}

// Misc. Functions
void token :: addPath(conversion newConv){paths.push_back(newConv);}