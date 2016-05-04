#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<double> v(3);
  for (int i = 0; i < 3; i++) {
    cin>>v[i];
  }
  sort(v.rbegin(), v.rend());
  if(v[0]>= v[1] + v[2]){
    cout<<"NAO FORMA TRIANGULO"<<endl;
    return 0;
  }
  if((v[0]*v[0])== (v[1]*v[1]) +(v[2]*v[2]))
    cout<<"TRIANGULO RETANGULO"<<endl;
  if((v[0]*v[0])> (v[1]*v[1]) +(v[2]*v[2]))
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
  if((v[0]*v[0])< (v[1]*v[1]) +(v[2]*v[2]))
    cout<<"TRIANGULO ACUTANGULO"<<endl;
  if((v[0]== v[1]) && (v[1]== v[2]))
    cout<<"TRIANGULO EQUILATERO"<<endl;
  if((v[0]== v[1] && v[0]!= v[2]) || (v[1]== v[2] && v[1]!= v[0]) || (v[0]== v[2] && v[0]!= v[1]))
    cout<<"TRIANGULO ISOSCELES"<<endl;
  return 0;
}
