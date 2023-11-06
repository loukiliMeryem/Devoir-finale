#include<iostream>
#include<string>
#include<vector>
using namespace std;
 class stack {
    int taille;
    vector <int> pile;
 public:
 stack();
 stack(int t);
 void operator <<(int n);
 void operator >> (int& n);
 int operator++();
 int  operator --();


 };
 stack::stack(): taille(20){}
 stack::stack(int t): taille(t){}
// oopérateur pour ajouter des entier à la pile
 void stack::operator<<(int n) {
    while(pile.size()<taille)
    {
        pile.push_back(n);

    }
    // opérateur pour retourer la valeur du haut de la pile 
    stack::operator>>(int& n){
        if(!pile.empty())
       n=pile.back();
       pile.pop_back();
    }
    // opérateur pour vérifier si la pile est pleine ou non
    int stack::operator++(){
        if(pile.size()==taille)
        return 1;
    
    }
    // opérateur pour vérifier si la pile est pleine ou non
   int stack:: operator--(){
    if(pile.empty())
    return 0;
   }
   int main(){

   stack p(10);
    p<<5<<9<<6;






    return 0;
   }


