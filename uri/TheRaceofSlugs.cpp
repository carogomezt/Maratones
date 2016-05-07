#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> vel(n);
        for (int i = 0; i < n; i++) {
            cin>>vel[i];
        }
        sort(vel.rbegin(), vel.rend());
        if(vel[0]<10)
            cout<<1<<endl;
        if(vel[0]>=10 && vel[0]<20)
            cout<<2<<endl;
        if(vel[0]>=20)
            cout<<3<<endl;
        
    }
    return 0;
}