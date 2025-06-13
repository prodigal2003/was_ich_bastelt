#ifndef FRANCAIS_H
#define FRANCAIS_H
#include "someone.h"
#include <string >

class Francais:public  Someone
{ using Someone::Someone;
public:
    Francais() = delete ;
    void  sayGoodNight() const noexcept override  ;



};

#endif // FRANCAIS_H
