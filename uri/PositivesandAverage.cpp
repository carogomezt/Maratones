#include <bits/stdc++.h>
using namespace std;

int main(){
    float aux, result = 0;
    int cont = 0;
    for (int i = 0; i < 6; i++) {
        cin>>aux;
        if(aux > 0.0){
            result += aux;
            cont++;
        }
    }
    cout<<cont<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<result/cont<<endl;
    return 0;
}