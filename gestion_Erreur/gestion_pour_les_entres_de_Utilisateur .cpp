#include <iostream> 
using namespace std; 
#include <string > // gestion des causer par l'utilisateur l'ors de la saisie au Clavier 
int addtion_deux_Nombres( ){
    int result ; 
int a;
int b;
cout << "geben sie eine nummer ein "; 
cin >>a ; 
cout << "geben sie eine nummer ein "; 
cin >>b ; 
if (a<0 ||b < 0   ){
throw std::runtime_error("pas le bon  Nombre "); 
}
cout << a+ b ; 


 return result =  a + b  ; 
} 
int main()
{

    try 
    { // le Code qui pourait declancher une exception 
        addtion_deux_Nombres(); 
        
       
    }
    catch (const std::exception& err ) 
    {
        cerr  << "oups une Erreur c'est Produite try this later "<< err.what() << endl ; 
    }                                                                              // on capture l'exeption qui put ce produire 
    return 0; 
}
/*a la Difference de cerr l'Erreur sera capturer et afficher afin que l'utilisateur voient ces Erreur */
/* Kleine Zusammenfassung 

 was ist eine Klasse ?                        den Name musst identisch zu Klasese sein , kein Void , hertellt und initializiert eine Objekt, 
 class NomClasse {
public:
    NomClasse();                           // constructeur par défaut
    NomClasse(int x);                      // constructeur avec paramètre
};

   Was ist eine Methode ?                    den Name kann willkürlich ausgewält werden , mit void oder return type, gibt einem Objekt ein Verhalten  
   class NomClasse {
public:
    void afficher();             // méthode sans paramètre
    int doubler(int nombre);     // méthode avec paramètre
};
 */
   
