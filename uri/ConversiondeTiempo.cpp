#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int aux;
    aux = n/3600;
    n = n%3600;
    cout<<aux<<":";
    aux = n/60;
    n = n%60;
    cout<<aux<<":";
    cout<<n<<endl;
   
    
    return 0;
}