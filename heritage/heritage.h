#ifndef HERITAGE_H
#define HERITAGE_H
#include <string>
using namespace std ;

class Unit
{
 public:
    Unit ()= delete ;
    Unit(int id , const string& name ) noexcept;
    int getId() const noexcept ;
    string getName() const noexcept ;
 private :
    int _id ;
     string _name;





};
#endif // HERITAGE_H
