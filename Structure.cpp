#include <iostream>
using namespace std ; 
struct Product // nom de la Stucture de donnes 
{ // Attribut ou menbre de la Structure de donnes 
    string name ; 
    float preice ; 
    bool available ; 
};
/*permet la la manipulation des donnes apres l'eurs creation */

int main (){
 /*pour eviter d'utiliser struct a chaque moment on peut simplement utiliser un alias */
 //using Product = struct Product est un alias 
 // declaration et initialisation de la     Premiere stucture de donnes 
 struct Product p {"papier toilette ", 1.29 , false , }; 
 cout << "price " << p.preice << endl ; 
 // ohh cool la valeur du papier peut etre modifier a tous mmoment comme ci dessous 
 p.preice  += 1 ; 
 cout << "price " << p.preice << endl ; 
 struct Product o {"le Parle G ", 5 , true    }; /* oprateur ternaire ce la signifie simplement (condition ? 
 valeur_si_vrai : valeur_si_faux )*/
 cout <<( o.available ? "JA " : "no") << endl ; 
 
    return  0; 
}
 