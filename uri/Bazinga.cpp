#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont = 1;
    string a, b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a == b)
            cout<<"Caso #"<<cont<<": De novo!"<<endl;
        else{
            if((a=="tesoura" && b== "papel") || (a=="papel" && b== "pedra") || (a=="pedra" && b== "lagarto")|| (a=="lagarto" && b== "Spock")|| (a=="Spock" && b== "tesoura")|| (a=="tesoura" && b== "lagarto")|| (a=="lagarto" && b== "papel")|| (a=="papel" && b== "Spock")|| (a=="Spock" && b== "pedra")|| (a=="pedra" && b== "tesoura"))
                cout<<"Caso #"<<cont<<": Bazinga!"<<endl; 
            else{
            cout<<"Caso #"<<cont<<": Raj trapaceou!"<<endl;
            }
        }
        cont++;
    }
    return 0;
}