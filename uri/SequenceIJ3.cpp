#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1; i<=9; i+=2){
        for (int j = i + 6, k = 0; k < 3; j--, k++) {
            cout <<"I="<<i<<" J="<<j<<endl;
        }
    }
    return 0;
}