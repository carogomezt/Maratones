#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int aux, par=0, impar=0, pos=0, neg=0;
  for (int i = 0; i < 5; i++) {
    cin>>aux;
    if(aux%2 == 0)
      par++;
    if(aux%2 != 0)
      impar++;
    if(aux > 0)
      pos++;
    if(aux < 0)
      neg++;
  }
  cout<<par<<" valor(es) par(es)"<<endl;
  cout<<impar<<" valor(es) impar(es)"<<endl;
  cout<<pos<<" valor(es) positivo(s)"<<endl;
  cout<<neg<<" valor(es) negativo(s)"<<endl;
  return 0;
}
