#ifndef _WINDOWS_
   #define _WINDOWS_
   #include <string>
   using namespace std;
  class Windows 
  {
    public:
       Windows()= default ; 
       Windows(string title )  ;
       Windows(string t, int w, int h  ) ;
       void run () const ; 
    private:
       string title ;
       int width; 
       int heigth ;

        


  };
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
   





   #endif 