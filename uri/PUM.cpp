#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i < n*4; i = i + 4) {
        for (int j = i; j < i+3; j++) {
            if(j== i+2)
                cout<<j<<" PUM"<<endl;
            else{
                cout<<j<<" ";
            }
        }
    }
    return 0;
}