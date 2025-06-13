#include "francais.h"
#include <string >
#include <iostream >

void Francais::sayGoodNight ()  const noexcept   {
    cout << _name  << " bonjour"    ;
    Someone::sayGoodNight();
}
// depuis la classe fille nous pouvons faire appelle a une Methode de la classe parent avec la Sytaxe ( nom de la Fonction ) mais le souci es que celui ci vas ce
// comporter comme si il appartenait a la classe mere et nom a la classse fille :
