#include "quest.h"
#include  <string >
# include <iostream >
using namespace std;

Quest::Quest ( const string& name, const string&  description, int unitId  ) noexcept :  _name (name ), _description(description ){

}
void Quest :: get() const noexcept {
    cout << _name << endl ;
    cout <<  _description ;

}
