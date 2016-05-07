#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    while(b <= 0){
        cin>>b;
    }
    int result=0;
    for (int i = a; i < (a+b); i++) {
        result+=i;
    }
    cout<<result<<endl;
    return 0;
}