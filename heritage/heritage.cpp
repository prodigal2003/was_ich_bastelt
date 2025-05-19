#include <iostream >
#  include <string >
using namespace std ;
#include <heritage.h>
Unit::Unit(int id , const string& name ) noexcept : _id (id), _name(name)
{

}
int Unit::getId() const noexcept {
     ;
    return _id ;
}
string Unit :: getName() const noexcept{ // la Fonction getName de la classe unit qui retourne un Striing
    return _name;
     ;
}
