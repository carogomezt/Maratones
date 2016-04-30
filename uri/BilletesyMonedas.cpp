#include <bits/stdc++.h>
using namespace std;


int main(){
    double n;
    cin>>n;
    double aux=0;
    aux = n/100.0;
    n = n%100.0;
    cout<<"NOTAS:"<<endl;
    cout<<aux<<" nota(s) de R$ 100.00"<<endl;
    aux = n/50.0;
    n = n%50.0;
    cout<<aux<<" nota(s) de R$ 50.00"<<endl;
    aux = n/20.0;
    n = n%20.0;
    cout<<aux<<" nota(s) de R$ 20.00"<<endl;
    aux = n/10.0;
    n = n%10.0;
    cout<<aux<<" nota(s) de R$ 10.00"<<endl;
    aux = n/5.0;
    n = n%5.0;
    cout<<aux<<" nota(s) de R$ 5.00"<<endl;
    aux = n/2.0;
    n = n%2.0;
    cout<<aux<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    aux = n/1.0;
    n = n%1.0;
    cout<<aux<<" moeda(s) de R$ 1.00"<<endl;
    aux = n/0.50;
    n = n%0.50;
    cout<<aux<<" moeda(s) de R$ 0.50"<<endl;
    aux = n/0.25;
    n = n%0.25;
    cout<<aux<<" moeda(s) de R$ 0.25"<<endl;
    aux = n/0.10;
    n = n%0.10;
    cout<<aux<<" moeda(s) de R$ 0.10"<<endl;
     aux = n/0.05;
    n = n%0.05;
    cout<<aux<<" moeda(s) de R$ 0.05"<<endl;
    aux = n/0.01;
    n = n%0.01;
    cout<<aux<<" moeda(s) de R$ 0.01"<<endl;
   
    
    return 0;
}
