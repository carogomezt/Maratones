#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int result;
    result = (a+b+abs(a-b))/2;
    result = (result+c+abs(result-c))/2;
    cout<<result<<" eh o maior"<<endl;
    
    return 0;
}
