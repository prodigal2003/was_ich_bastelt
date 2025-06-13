#ifndef DEUTSCH_H
#define DEUTSCH_H
#include "someone.h"
class Deutsch : public Someone
{ using Someone::Someone;
public:
    Deutsch() = delete ;
    void sayGoodNight() const noexcept override;
};

#endif // DEUTSCH_H
