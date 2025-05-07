#include <iostream >
#include <math.h>
using namespace std ; 
template < typename T >
T addition (T a ,  T b ){
    return a + b ;
}
int main (){
    cout << addition (3 ,5 ) << endl ; 
    cout << addition (4.5 ,6.7 )<< endl ; 
    string name {"alain "}; 
    string Vorname {"Marcel "}; 
    cout << addition (name , Vorname); 
    char v {'b'}; 
    char c {'a'};
    cout << addition ( v , c )<< endl ; 
    int a ; 
    //cout << addition (  Alain, Marcel )<< endl ; 
    return 0;
    
}