#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>>n;
    if(n >= 0.0 && n <= 2000.00)
        cout<<"Isento"<<endl;
    if(n >= 2000.01 && n <= 3000.00){
        n-= 2000.0;
        cout<<fixed<<setprecision(2)<<"R$ "<<n * (0.08)<<endl;
    }
    if(n >= 3000.01 && n <= 4500.00){
        n -= 3000.0;
        cout<<fixed<<setprecision(2)<<"R$ "<<(n * 0.18) + (1000 * 0.08)<<endl;
    }
    if(n > 4500.0){
        n -= 4500;
        cout<<fixed<<setprecision(2)<<"R$ "<<(n * 0.28) + (1500 * 0.18) + (1000 * 0.08)<<endl;
    }
    return 0;
}