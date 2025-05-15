#include <iostream> 
using namespace std; 
#include <string>
#include <cassert> // pour sigenaler les Erreures du programmeur 
void createPlayer(string name  , int number  ){
    if (number < 0 )
    assert (number > 0 && "die Spielersnummer ist kleiner als null "); 
    // donc si nunmber > o le Programme comtinue mais dans le cas contraire il est interrompu par l'assertion
    cout << " nom du personnage "<< name << " Nummero du personnage " << number ; 

}
int main ()
{
   createPlayer ("robert" , -6 );
return 0; 
}
/*Eine kleine Zussammenfassung 
1. Lancer une exception: throw ExceptionType("Message d'erreur");
2. Attraper une exception (try-catch) :
try {
    // Code qui peut causer une exception
    throw std::runtime_error("Une erreur est survenue");
}
catch (const std::exception& e) {
    std::cerr << "Erreur attrapée : " << e.what() << std::endl;
}

Type d'exception	Quand l’utiliser
std::invalid_argument	Argument invalide passé à une fonction
std::out_of_range	Accès à un indice hors des limites
std::runtime_error	Erreur d'exécution générale
std::logic_error	Erreur logique dans le programme
std::length_error	Longueur invalide (ex. trop grande)
std::domain_error	Erreur mathématique (racine de nombre négatif, etc.)
std::overflow_error	Dépassement de capacité (ex. multiplication)



 */