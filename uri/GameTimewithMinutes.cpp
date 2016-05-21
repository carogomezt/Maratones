#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int h, m;
    if (c > a) {
        h = c - (a + 1);
        m = (60 + d) - b;
        h += m / 60;
        m %= 60;
        cout<< "O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    }
    else {
        if (a == c and d > b) {
            cout<<"O JOGO DUROU 0 HORA(S) E "<<d - b<<" MINUTO(S)"<<endl;
        }
        else {
            h = (24 - (a + 1)) + c;
            m = (60 + d) - b;
            h += m / 60;
            m %= 60;
            cout <<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
        }
    }
  return 0;
}