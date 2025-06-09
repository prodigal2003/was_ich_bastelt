#include "quete.h"
#include<string >
#include <heritage.h>
using namespace std ;

Quete:: Quete(int id, const string& name , const string& description ) noexcept : Unit (id , name), description(description ){/* j#aurais encore pu ne copie r tous les Attribut du constructeur
de Unit mais vue´que j'ai ecrit Using Unit::Unit  je serais oubliges de inclkure tout les Constructeur de Unit mais il y a uune solution !! : a la Place de id j'aurais
pu ecrire simplement 0 donc Unit (0, name ) et Quete ( const string& name, const string& description  */

}
string  Quete::getDescription() const  {

    return description;
}
