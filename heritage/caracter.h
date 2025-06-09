#ifndef CARACTER_H
#define CARACTER_H
#include <heritage.h>
#include <string >

class Caracter: public Unit  // la Calss Caracter herite publiquement de Unit .on garde les elements qui etaint publique dans la class unit
{
    using Unit::Unit;
public:
    Caracter() = delete ;
    int getLevel() const   ;
    Caracter (int id , const string& name, int level  ) noexcept;
private:
    int level ;


};

#endif // CARACTER_H
