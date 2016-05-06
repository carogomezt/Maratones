#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double a, b, c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        double av;
        av = (a*2 + b*3 + c*5)/10;
        cout<<fixed<<setprecision(1)<<av<<endl;
    }   
    return 0;
}