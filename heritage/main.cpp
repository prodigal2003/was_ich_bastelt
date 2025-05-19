;
#include <heritage.h>
#include<iostream >
#include <string >
#include <caracter.h>
using namespace std;

int main()
{
    Unit pers1  { 4 , "joseph " };
    cout << pers1.getName()<< endl ;
    cout <<pers1.getId() << endl;

    Caracter c1 {5, "jeasson " ,8};
    cout << c1.getName()<< endl ;
    cout <<c1.getId() << endl;
    cout <<c1.getLevel()<< endl;
     return 0;
}
