#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double prom=0,cont=0;
    while(cin>>n){
        if(n<0)
            break;
        prom+=n;
        cont++;
    }
    cout<<fixed<<setprecision(2)<<prom/cont<<endl;
    return 0;
}