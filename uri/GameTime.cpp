#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int result;
    if(b<= a)
       result = (24+b) - a;
    else{
        result = b -a;
    }
    cout<<"O JOGO DUROU "<<result<<" HORA(S)"<<endl;
    return 0;
}