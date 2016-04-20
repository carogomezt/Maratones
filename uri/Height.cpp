#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  while(n--){
    int m;
    scanf("%d", &m);
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
      scanf("%d", &a[i]);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++) {
      if (i) printf(" ");
      printf("%d",a[i]);

    }
    printf("\n");
  }
  return 0;
}
