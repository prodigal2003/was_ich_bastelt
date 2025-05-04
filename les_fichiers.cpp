#include<iostream >
#include<string>
#include<fstream >
using namespace std ; 
 
int main () {
 ofstream f {"data.txt"}; // std:: ios ::in  pourl'ouverture du fichier
 //ifstream f{"animals.txt"};// std::ios::out pour l'ecriture sur le Fichier 
 if (f.is_open()){
    f << "Hello World "; 
    //string name {" "}; 
    //f >> name; //  permet de lire le Premier Nom present dans la liste (de animals.txt)
    //cout << name <<endl ; 
   // f >> name; //  permet de lire le Premier Nom present dans la liste (de animals.txt)
    //cout << name <<endl ; 
 }  
 
 //f.close();  //pour la Fermeture du Fichier 
 return 0 ; 
}






