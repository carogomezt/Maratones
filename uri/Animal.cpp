#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, c;
  cin>>a>>b>>c;
  if(a == "vertebrado"){
    if(b== "ave"){
      if(c == "carnivoro")
        cout<<"aguia"<<endl;
      if(c == "onivoro")
        cout<<"pomba"<<endl;
    }
    else{
      if(b == "mamifero"){
        if(c == "onivoro")
          cout<<"homem"<<endl;
        if(c == "herbivoro")
          cout<<"vaca"<<endl;
      }
    }
  }
  else{
    if(a == "invertebrado"){
      if(b == "inseto"){
        if(c == "hematofago")
          cout<<"pulga"<<endl;
        if(c =="herbivoro")
          cout<<"lagarta"<<endl;
      }
      else{
        if(b =="anelideo"){
          if(c == "hematofago")
            cout<<"sanguessuga"<<endl;
          if(c == "onivoro")
            cout<<"minhoca"<<endl;
        }
      }
    }
  }
  return 0;
}
