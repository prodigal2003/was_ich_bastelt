#ifndef ENGLISH_H
#define ENGLISH_H
#include "someone.h"
#include <string >
using namespace std ;

class English: public Someone // NB tout ce qui est dans someone est herite par English sauf le constructeurs pour le faire on a besion de Using::Using
{ using Someone::Someone;
public:
    English()= delete ;
    void sayGoodNight() const noexcept override; // pour redefinir les comportement de la FGonction  ;
};

#endif // ENGLISH_H


