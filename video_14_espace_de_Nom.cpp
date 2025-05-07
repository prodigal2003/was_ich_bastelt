  // le Fichier principale (le main) 
  #include "util.hpp" //  Pourquoi les guillemets " " ? Ils disent : « va chercher ce fichier dans le dossier du projet » (différent de <...> qui va dans les fichiers système).
  #include <iostream>
  int main (){
    Util::test();/*👉 Tu appelles la fonction test() du namespace Util.
    Le :: signifie ici
    "Va dans l’espace de noms Util, et appelle la fonction test()"*/
     /*g++ -std=c++11 -Wall -Wextra util.cpp video_14_espace_de_Nom.cpp -o prog  est la commende utiliser pour compiler le Programme pas besoin d'impliquer util.hpp a 
    l'interieur car il est inclut dans util.cpp via #include"util.hpp"*/
    essaie::fichier(); 
    Util::essaie_2(); 
    test() ; 
    return 0 ; 
   
  }