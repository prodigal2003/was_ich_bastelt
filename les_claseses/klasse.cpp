#include<iostream>
using namespace std; 
#include "klasse.hpp"

Point::Point()
{ // implemantation avec l'operateur de portee (::)
    cout << "ceci est la Creation d'un Point "<< this << endl ; // this c'ets l'instence courante hmm elle foctinne un peut comme un Pointeur 
   
} 
Point::Point(const Point& p )
{
cout << "copie d'un point" << endl ; 
}

 