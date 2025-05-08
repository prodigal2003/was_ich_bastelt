#include <iostream> 
using namespace std ; 
/* stuct : par defaut les donnes sont publics 
class: donnes privees (par defaut )*/
struct Point 
{
    int x; 
    int y; 
}; 
int main (){
    Point p {145, 38 }; 
    cout << "(" << p.x  << "," << p.y  <<")"<< endl ;
    p.x = 37;
    cout << p.x  << "," << p.y  << endl ;
    
    return 0    ; 
}