#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b, result=0;
        cin>>a>>b;
        for (int i = a; i <= (a+2*b)-1; i++) {
            if(i%2 != 0){
                result+=i;
            }
              
        }
        cout<<result<<endl;
    }
    return 0;
}