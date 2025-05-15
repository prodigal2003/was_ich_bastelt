#include<iostream >
#include"encapsulation.h"
#include <string >
#include<math.h>
using namespace std;

Encapsuler::Encapsuler(string tittle) : tittle(tittle){}
//this ->tittle = tittle ;
//cout << "je suis : " << tittle << endl;
Encapsuler::Encapsuler(int x, int y )
{

    this->a = x;
    this->b =y ;
    cout <<this->a + this-> b << endl ;
}

string Encapsuler::getTittel ()const
{
    return this -> tittle ;

}
void Encapsuler::setTittel(const string tittle )
{
    if (tittle.size()>20)
        throw  std::length_error("le Nom de la fenetre doit comporter mois de 20 mots  "); /*L’instruction throw sert à lancer une exception, c’est-à-dire interrompre le programme normal lorsqu’une erreur critique survient.
Tu utilises cela pour signaler une erreur, comme une entrée invalide, une division par zéro, un fichier introuvable, etc.
 if (nom.empty()) ca aussi permet dde verifier si une case est vide
*/


    this -> tittle = tittle ;
}
