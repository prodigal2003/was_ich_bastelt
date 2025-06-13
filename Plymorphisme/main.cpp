#include "deutsch.h"
#include <someone.h>
#include <iostream >
#include <english.h>
#include <string>
#include <francais.h>
using namespace std ;
int main()
{
    // liste / tableau de sómeone
    /*declarer une liste, un Tableau, .. de someone , intialiser avec plusieur obljeckt derives ( indonesion, English
     etc..
     pour chaque someone de liste / du Tableau, faire appel a sayGoodBye ()
     si c'ets un Anglais, alors appeler sa methode
     sinon si c'est un indonesien, alors  appeler sa methode ect..
     */
   English pers1{ "erline " };
    pers1.sayGoodNight();

    Deutsch pers2{ "josh" }; // qui vient de l#HERITAGE
    pers2.sayGoodNight(); // qui vient du Polymorphisme
    Francais gars1{ " francisco"};
    gars1.sayGoodNight();
      return 0 ;
}
