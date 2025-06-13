#ifndef SOMEONE_H
#define SOMEONE_H
#include <string >
using namespace std ;

class Someone
{
public:
    Someone() = delete ;
    Someone(const string& name ) noexcept ; // name  Interface publique (exposé à l’extérieur)
    virtual void sayGoodNight() const noexcept ;
protected  :
    string _name ;// _name Attribut privé interne (stockage réel)

};

#endif // SOMEONE_H
/*
 cette classe est utiliser comme clase commune pour plúsiuer personnes diffrerentes qui parlerons plusieurs langues diffrentes une Classe se comporte
differament 🧠 Le but du polymorphisme ?
C’est de dire :

« J’ai une même fonction dans plusieurs classes, mais elle ne se comporte pas pareil selon l'objet. »
autre NB ✅ Utilise protected si tes classes filles ont besoin d’accéder directement aux variables.

🔒 Laisse private si tu veux encapsuler complètement les données (et y accéder via get() / set()). private = mon secret personnel

protected = mon secret que je peux partager avec ma famille
on ne peut pas changer la signature d'une classe fille exemple de string ( aus vitual ) pour int ( in override)   */
