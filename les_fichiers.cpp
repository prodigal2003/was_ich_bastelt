#include<iostream >
#include<string>
#include<fstream >
using namespace std ; 
// essayons de creer une Fontion pour lire mon Fichier .txt 
/*void LireFichier (const string& nomFichier ) & reference non Modifiable pas de copie on travaille directemnet sur l'originale cela permat d'economiser l'espace de Stockage {
    ifstream f("nomFichier ");
    if (!f.is_open()){
    cerr << "ein Fehler ist aufgetreten "; 
    return  ;
    string line ; 
    while( getline(f>> ws, line ));
    cout <<line << endl ; 

}
  */
int main () {
   //ofstream f {"data.txt"}; // std:: ios ::in  pourl'ouverture du fichier
 ifstream f{"animals.txt"};// std::ios::out pour l'ecriture sur le Fichier 
 //std::ios:: ecrire a la fin du Fichier 
    if (!f.is_open()){
      cerr << "ein Fehler ist aufgetreten "; 
      return 1 ;
    }
  if (f.is_open()){
    /*comme par exemple dans la Programmation d'un Jeux on peut enregisstrer le Nomm , les Score .....*/
      //int score {110};
      //f << score ; 
      //f << "Hello World "; 
      string name {" "}; 
      f >> name; //  permet de lire le Premier Nom present dans la liste (de animals.txt)
      cout << name <<endl ;
      string line {""} ;
      getline(f>> std::ws, line );
      cout << line << endl ; 
      getline(f>> std::ws, line ); /*getline(...) : lit une ligne complète depuis le fichier f et la stocke dans 
      la variable line.
      std::ws : supprime les espaces blancs (espaces, retours à la ligne, tabulations) au début de l'entrée.
      line est la variable dans la quelle on stocke le Mot a lire  
      */

      cout << line << endl ; 
    // f >> name; //  permet de lire le Premier Nom present dans la liste (de animals.txt)
      //cout << name <<endl ; 
      while (f>>name ) 
      cout << name << endl; 
      {
        /* code */
      }
    
 }  
 
 //f.close();  //pour la Fermeture du Fichier 
 return 0 ; 
}






