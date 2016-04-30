#include <bits/stdc++.h>
using namespace std;


int main(){
    double n;
    cin>>n;
    int p_ent, p_flot, aux1;
    p_ent = n;
    aux1 = (n*100);
    p_flot = aux1%100;
    double aux=0;
    aux = p_ent/100;
    p_ent = p_ent%100;
    cout<<"NOTAS:"<<endl;
    cout<<aux<<" nota(s) de R$ 100.00"<<endl;
    aux = p_ent/50;
    p_ent = p_ent%50;
    cout<<aux<<" nota(s) de R$ 50.00"<<endl;
    aux = p_ent/20;
    p_ent = p_ent%20;
    cout<<aux<<" nota(s) de R$ 20.00"<<endl;
    aux = p_ent/10;
    p_ent = p_ent%10;
    cout<<aux<<" nota(s) de R$ 10.00"<<endl;
    aux = p_ent/5;
    p_ent = p_ent%5;
    cout<<aux<<" nota(s) de R$ 5.00"<<endl;
    aux = p_ent/2;
    p_ent = p_ent%2;
    cout<<aux<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    aux = p_ent/1;
    p_ent = p_ent%1;
    cout<<aux<<" moeda(s) de R$ 1.00"<<endl;

    aux = p_flot/50;
    p_flot = p_flot%50;
    cout<<aux<<" moeda(s) de R$ 0.50"<<endl;
    aux = p_flot/25;
    p_flot = p_flot%25;
    cout<<aux<<" moeda(s) de R$ 0.25"<<endl;
    aux = p_flot/10;
    p_flot = p_flot%10;
    cout<<aux<<" moeda(s) de R$ 0.10"<<endl;
     aux = p_flot/5;
    p_flot = p_flot%5;
    cout<<aux<<" moeda(s) de R$ 0.05"<<endl;
    aux = p_flot/1;
    p_flot = p_flot%1;
    cout<<aux<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
