// fichier d'entete (declarations )
#ifndef   UTIL_HPP // Empêcher l’inclusion multiple du même fichier `.hpp
  #define UTIL_HPP
  #include <iostream >

  namespace Util {// Un **namespace** est un conteneur logique
    void test(); /*La fonction `test();` est seulement **déclarée** ici — pas encore définie.  
    C’est comme dire au compilateur : *"Tu verras plus tard où je te dis comment cette fonction fonctionne."**/
  }
  /* on pourait encore creer un espace de Nom avec un  Nom different le but est de garder le namespace erhaltet c.a.d util peut etre modifier a tous moment  */
  namespace essaie{
   void fichier();
  }
  namespace Util {
    void essaie_2 (); 

  }
  
#endif   