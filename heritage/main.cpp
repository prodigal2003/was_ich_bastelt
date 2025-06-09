#include "quest.h"
#include <heritage.h>
#include<iostream >
#include <string >
#include <caracter.h>
using namespace std;
#include <quete.h>
int main()
{
    Unit pers1  { 4 , "joseph " };
    cout <<"le Nom du jouer est : "<< pers1.getName()<< endl ;
    cout <<pers1.getId() << endl;

    Caracter c1 {5, "jeasson " ,8};
    cout <<"le Nom du jouer est : "<< c1.getName()<< endl ;
    cout <<c1.getId() << endl;
    cout <<c1.getLevel()<< endl;

    Quete ein {4 ,"josh", "a un gros Gateau "} ;
    cout <<"le Nom du jouer est : "<< ein.getName()<< endl ;
    cout << ein.getDescription();
    cout <<ein.getId() << endl;
    Quest q {"tourte au sanglier ", "rapporte 5 morceaux de viande ", pers1.getId()};
    q.get();
     return 0;
}
