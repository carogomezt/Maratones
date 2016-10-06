#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int T;
  cin >> T;
  while (T--) {
    string s;
    cin >> s;
    string aux;
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i - 1] == s[i])
        continue;
      else {
        aux += s[i];
      }
      j++;
    }
    cout << aux << endl;
  }
  return 0;
}
