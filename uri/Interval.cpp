#include <bits/stdc++.h>
using namespace std;

int main() {
  double a;
  cin>>a;
  if(a<0.0 || a >100.0)
    cout<<"Fora de intervalo"<<endl;
  else{
    if((a>= 0.0) && (a<=25.0))
      cout<<"Intervalo [0,25]"<<endl;
    if((a>25.0) && (a<=50.0))
      cout<<"Intervalo (25,50]"<<endl;
    if((a>50.0) && (a<=75.0))
      cout<<"Intervalo (50,75]"<<endl;
    if((a>75.0) && (a<=100.0))
      cout<<"Intervalo (75,100]"<<endl;

  }
  return 0;
}
