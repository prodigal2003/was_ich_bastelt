#include "caracter.h"
#include <iostream >
#  include <string >
using namespace std ;
#include <heritage.h>

Caracter::Caracter(int id , const string& name , int level  ) noexcept : Unit (id, name), level(level) {

}
int Caracter:: getLevel() const{
    return level;
}

/*int Caracter::setLevel(){
    this->level = 5 ;
    return level ;
}*/
