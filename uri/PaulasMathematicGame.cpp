#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  while(n--){
    char x,y,z;
    cin>>x>>y>>z;
    int result;
    if (x == z) {
      result = (x - '0')*(z - '0');
      cout << result << endl;
    }
    else if (y >= 'a' and y <= 'z') {
      result = (x - '0')+(z - '0');
      cout << result<< endl;
    }
    else if (y >= 'A' and y <= 'Z') {
      result = (z - '0')-(x - '0');
      cout << result << endl;
    }

  }
  return 0;
}
