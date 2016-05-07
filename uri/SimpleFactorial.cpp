#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    vector<lli> fact(14);
    fact[0]=1;
    fact[1]=1;
    for (int i = 2; i < 13; i++) {
        fact[i] = i*fact[i-1];
    }
    int n;
    cin>>n;
    cout<<fact[n]<<endl;
    return 0;
}