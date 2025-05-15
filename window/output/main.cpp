#include <iostream> 
using namespace std ; 
#include "windows.hpp"

int main ()
{
 Windows app{}; // nom de la Klasse + Objet 
 Windows newapp{"firefox" }; 
 Windows oldAPP { "redence Evil", 6, 7}; // ceci est une surchage de constructeurs alors le Compilateur procede as un overload resolution et
 // juge en Fonction du Nombre d'arguments 
  
 newapp.run(); // appel de la Methode  
 

    return 0 ; 
}
/*Kleine Zusammenfassung 
NomClasse obj;         // appelle le constructeur par défaut
NomClasse obj(5);      // appelle le constructeur avec paramètre

 Methode 
 wie ruft man eine Methode auf ? 
  NomClasse obj;
obj.afficher();               // appel de méthode
int r = obj.doubler(4);       // appel de méthode avec retour

*/