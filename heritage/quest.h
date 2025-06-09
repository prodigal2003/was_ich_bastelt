#ifndef QUEST_H
#define QUEST_H
#include  <string >
using namespace std;

class Quest
{
public:
    Quest()= delete ;
    Quest( const string& name, const string&  description, int unitId  ) noexcept;   // "Cette fonction ne lèvera aucune exception (throw) durant son exécution.";
    void get() const noexcept;
private :
    string _name ;
    string _description;

};

#endif // QUEST_H
/*
 *
Ici, getName() est une fonction écrite par le programmeur pour lire la valeur privée name.
Ce n’est pas une fonction prédéfinie comme std::cout ou main().

Tu pourrais appeler ta fonction autrement si tu veux  comme dans mon exemple j'ai utiliser void get() :
 */
