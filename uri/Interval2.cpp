#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,aux, in=0, out=0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>aux;
    if(aux>= 10 && aux<= 20)
      in++;
    else{
      out++;
    }
  }
  cout<<in<<" in"<<endl;
  cout<<out<<" out"<<endl;
  return 0;
}
