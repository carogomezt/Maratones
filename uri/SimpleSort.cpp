#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  vector<int> vec(3);
  vector<int> aux(3);
  for (int i = 0; i < 3; i++) {
    cin>>vec[i];
    aux[i] = vec[i];
  }
  sort(aux.begin(), aux.end());
  for (int i = 0; i < 3; i++) {
    cout<<aux[i]<<endl;
  }
  cout<<endl;
  for (int i = 0; i < 3; i++) {
    cout<<vec[i]<<endl;
  }
  return 0;
}
