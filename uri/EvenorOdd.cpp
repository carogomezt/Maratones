#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, aux;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>aux;
    if(aux==0){
      cout<<"NULL"<<endl;
      continue;
    }
    if(aux%2 == 0)
      cout<<"EVEN ";      
    if(aux%2 != 0)
      cout<<"ODD ";
    if(aux>0)
      cout<<"POSITIVE"<<endl;
    if(aux<0)
      cout<<"NEGATIVE"<<endl;
  }
  return 0;
}
