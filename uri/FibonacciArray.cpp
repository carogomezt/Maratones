#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main(){
    
    vector<lli> fibo(62);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 61; i++) {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"Fib("<<n<<") = "<<fibo[n]<<endl;
    }
    
    
    return 0;
}