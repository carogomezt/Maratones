#include <bits/stdc++.h>
using namespace std;

bool isTriangle(double a, double b, double c) {
  bool l1, l2, l3;
  l1 = (a < b + c) and (a > fabs(b - c));
  l2 = (b < a + c) and (b > fabs(a - c));
  l3 = (c < a + b) and (c > fabs(a - b));
  if(l1 && l2 && l3)
    return true;
  else{
    return false;
  }
}

int main() {
  double a, b, c;
  cin>>a>>b>>c;
  if(isTriangle(a,b,c))
    cout<<fixed<<setprecision(1)<<"Perimetro = "<<a + b + c<<endl;
  else{
    cout<<fixed<<setprecision(1)<<"Area = "<<(a + b) * c / 2.0<<endl;
  }
  return 0;
}
