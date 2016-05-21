#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0, g=0, d=0, aux;
    while(cin>>aux){
        if(aux == 4)
            break;
        if(aux == 1)
            a++;
        if(aux == 2)
            g++;
        if(aux == 3)
            d++;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;
    return 0;
}