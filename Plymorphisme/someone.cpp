#include "someone.h"
#include <string >
#include <iostream>
using namespace std;
Someone:: Someone(const string& name ) noexcept: _name(name ){} // : _id(id)             // ici on dit : "_id prend la valeur de id"


void Someone::sayGoodNight() const noexcept{
    cout<< _name << ":......." << endl ;
}
/*
NB on peut implementer une methode virtuelle */
