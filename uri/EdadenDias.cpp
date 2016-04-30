#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int aux=0;
    aux = n/365;
    n = n%365;
    cout<<aux<<" ano(s)"<<endl;
    aux = n/30;
    n = n%30;
    cout<<aux<<" mes(es)"<<endl;
    cout<<n<<" dia(s)"<<endl;
   
    
    return 0;
}