#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H
#include <string >
using namespace std;
class Encapsuler
{
public:
    Encapsuler(string tittle);
    Encapsuler(int x, int y   );
    string  getTittel () const ;
    void setTittel(const string Tittle  );

private :
    string tittle ;
    int a ;
    int b ;
};
/*
 masquer est apres acceder et modifier
Le tittle à droite → c’est ce que la personne donne (le paramètre, comme "Bonjour").
Le this->tittle à gauche → c’est la boîte de la classe (l’attribut private).
👉 Donc this->tittle = tittle; veut dire :
Mets ce que la personne donne dans ma boîte privée.
es attributs privés (private) peuvent être utilisés partout _dans la classe elle-même_** (y compris dans le constructeur)**.

*/
#endif // ENCAPSULATION_H
