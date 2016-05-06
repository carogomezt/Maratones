#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        double a, b;
        cin>>a>>b;
        double result = a/b;
        if(b == 0 || (a==0 && b==0))
            cout<<"divisao impossivel"<<endl;
        else{
            cout<<fixed<<setprecision(1)<<result<<endl;  
        }
    }
    return 0;
}