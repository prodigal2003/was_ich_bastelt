#include<iostream>
using namespace std;
#include "windows.hpp"

Windows:: Windows(string title ){

    cout << "ma fenetre " << title << endl ; 
}
 Windows::Windows(string t , int w , int h  ):title (t) , width(w ), heigth(h)  
 {
    cout << "ma fenetrennnn " << title << "  poids " << width << " taille " << heigth <<  endl ;    
 } 
 void Windows::run() const 
 {
    cout << "affichage ..."<< endl; 
 } 
 
    
 
 /*
  Windows::Windows(string title, int width, int heigth  ){
    cout << "ma fenetre " << title << "  poids " << width << " taille " << heigth <<  endl ;    
 } 
 */
 /* Klaine Zusammenfassung 
 wie implementiert man eine Konstructeur ?
 NomClasse::NomClasse() {
    // initialisation sans argument
}

NomClasse::NomClasse(int x) {
    // initialisation avec x
}
  wie läasst sich eine Methode implementieren ? 
  void NomClasse::afficher() {
    cout << "Je suis un objet" << endl;
}

int NomClasse::doubler(int nombre) {
    return nombre * 2;
}

 */