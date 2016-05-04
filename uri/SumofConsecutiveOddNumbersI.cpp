#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int a, b, sum=0, aux;
  cin>>a>>b;
  if(a>b){
    aux = a;
    a = b;
    b = aux;    
  }

  for (int i = a+1; i < b; i++) {
    if(i%2 != 0)
      sum += i;
  }
  cout<<sum<<endl;
  return 0;
}
