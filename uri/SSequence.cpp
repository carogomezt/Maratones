#include <bits/stdc++.h>
using namespace std;

int main(){
    double result=0;
    for (double i = 1; i <= 100; i++) {
        result+=(1/i);
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
}