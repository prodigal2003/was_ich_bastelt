#include<iostream >
#include<string>
#include<fstream >
using namespace std ; 
 
int main () {
 ifstream f {"animals.txt"}; // std ios ::in  
 string name {" "}; 
 f >> name; //  permet de lire le Premier Nom present dans la liste (de animals.txt)
 cout << name <<endl ; 
 //cout << "NA FCF" <<endl ; 
 //cin.get(); 
 return 0 ; 
}






