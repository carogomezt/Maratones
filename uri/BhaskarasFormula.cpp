#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;
  cin>>a>>b>>c;
  if((a==0) || ((b*b - (4*a*c)) < 0))
    cout<<"Impossivel calcular"<<endl;
  else{
    double r1, r2;
    double d = (b*b) - (4*a*c);
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;
  }
  return 0;
}
