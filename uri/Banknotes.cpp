#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> num(7,0);
    cin>>n;
    int aux;
    cout<<n<<endl;
    aux = n/100;
    n = n%100;
    cout<<aux<<" nota(s) de R$ 100,00"<<endl;
    aux = n/50;
    n = n%50;
    cout<<aux<<" nota(s) de R$ 50,00"<<endl;
    aux = n/20;
    n = n%20;
    cout<<aux<<" nota(s) de R$ 20,00"<<endl;
    aux = n/10;
    n = n%10;
    cout<<aux<<" nota(s) de R$ 10,00"<<endl;
    aux = n/5;
    n = n%5;
    cout<<aux<<" nota(s) de R$ 5,00"<<endl;
    aux = n/2;
    n = n%2;
    cout<<aux<<" nota(s) de R$ 2,00"<<endl;
    aux = n/1;
    n = n%1;
    cout<<aux<<" nota(s) de R$ 1,00"<<endl;
    
    return 0;
}