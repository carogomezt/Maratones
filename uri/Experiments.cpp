#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, c=0, r=0,s=0, cont=0;
    cin>>n;
    while(n--){
        int v;
        char a;
        cin>>v>>a;
        if(a =='C')
            c += v;
        if(a == 'R')
            r += v;
        if(a == 'S')
            s += v;
        
        cont += v;
    }
    cout<<"Total: "<<cont<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<(c*100)/cont<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<(r*100)/cont<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<(s*100)/cont<<" %"<<endl;
    return 0;
}