#include <bits/stdc++.h>
using namespace std;

int main(){
    double result=1;
    for (double i = 3, j=1; i <= 39; i+=2,j++) {
        result+=(i/(pow(2, j)));
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
}