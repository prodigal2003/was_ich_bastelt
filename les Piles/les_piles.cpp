#include<iostream>
#include<string>
using namespace std; 
#include <stack >
/*size () pour verifier la Taille de la Pile 
empty() pour verifier si la Pile esz vide
push pour augmenter un element dans la Pile
pop() suprimmer le dernier element aujoutes 
top () afficher les elements de la pile 
 */
int main (){ //Lifo le dernier elemnet est le premeier que l'on peut enlever de la Liste ? 

     stack <int > st ;
     stack <int> s2;
     static int gesamtAnzahl ;
      
      
     
        cout <<st.size() << endl; 
        if ( st.empty()){
            //cout<< "la pile est vide " << endl;
            //st.push(2); 
            //cout << "top "<< st.top ()<< endl ; // afichher les elements dans une pile
            //st.push(9);   // comment empiler les element dans la pile ? a travers la methode 
             //cout << "top "<< st.top ()<< endl ; // afichher les elements dans une pile
            //st.pop(); // pour retirer un element dans la Pile
             //cout << "poped " << st.top ()<< endl ; // afichher les elements dans une pile 
             st.push(1);/*dans le cas selon le sens ecrit, on pense que le premier element dans la pile c'est 5 mais c'est plutot le contraire 
             c'a c'est l'ordre du Programme en realite le compilateur push d'abord 1 ensuite 2 .... donc d'apres LIFO: last =5  firt out=5*/
             st.push(2);
             st.push(3);
             st.push(4);
             st.push(5);
             while (!st.empty()){
                 cout << "new top " <<  st.top()<< endl; 
                 st.pop();
                 ++gesamtAnzahl;
                 

             }
             cout<< st.size()<< endl; 
             s2.push(5);
             
             cout << "die gesamtanzhal ist " << gesamtAnzahl;

        }
 return 0;
}
