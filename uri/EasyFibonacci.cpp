#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main(){
    
    vector<lli> fibo(50);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 49; i++) {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<fibo[i];
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;
    
    return 0;
}