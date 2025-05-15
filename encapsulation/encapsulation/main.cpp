#include<iostream >
#include <string >
using namespace std;
#include"encapsulation.h"

int main()
{

    Encapsuler P1 { "president "} ;
    Encapsuler P2 {5  , 3 };
    cout << "I AM :" << P1.getTittel()<< endl ;
    P1.setTittel ("Mon nouveau tire qui est un peu troplong pour l'integrer  ");
    cout << P1.getTittel() << endl ; // cout setTttle serait faux car set change uniquement la Valeur
    return 0;
}
