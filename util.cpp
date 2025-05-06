//Le fichier d'implementation 
#include <iostream>
#include "util.hpp" // inclusion du Fichier d'entete toujours entourer en ""
#include <stdio.h>
using namespace std ; 
void Util::test(){ //Tu définis ici la fonction test() qui se trouve dans l’espace de noms Util
    /*L’opérateur :: sert à accéder à quelque chose qui se trouve à l’intérieur d’un espace de noms (namespace), d’une classe, ou d’une structure.Il dit au compilateur :
« Va chercher ce que je te dis à l’intérieur de ce contenant précis. » Util::test() = fonction test qui est dans le namespace Util
std::cout	Va chercher cout dans le namespace std*/
 
    cout << "test ! "<< endl   ;
}
void essaie ::fichier(){
  cout <<"ceci est un essaie avec une autre Varriable (une autre classe ) "<< endl ; 
}
void Util::essaie_2(){
  cout << "ceci est un autre essaie numeeo 2 pour comprendre les Syntaxe de c++ " << endl ; 
}