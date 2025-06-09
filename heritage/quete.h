#ifndef QUETE_H
#define QUETE_H
#include <string >
#include <caracter.h>
#include <heritage.h>
using namespace std ;

class Quete:public Unit
{
    using Unit::Unit; // 🔔 « Hérite automatiquement de tous les constructeurs publics (ou protégés) de Unit ».
 public:
    Quete() = delete;
    string getDescription()const ;
    Quete (int id,const string& name , const string& description) noexcept;

 private:

    string description ;
};

#endif // QUETE_H
