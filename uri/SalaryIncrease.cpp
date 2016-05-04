#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double sal, inc;
  cin>>sal;
  if(sal>= 0 && sal<= 400.00){
    inc = sal*0.15;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<sal+inc<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<inc<<endl;
    cout<<"Em percentual: 15 %"<<endl;
  }
  if(sal>=400.01  && sal<= 800.00){
    inc = sal*0.12;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<sal+inc<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<inc<<endl;
    cout<<"Em percentual: 12 %"<<endl;
  }
  if(sal>= 800.01 && sal<= 1200.00){
    inc = sal*0.10;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<sal+inc<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<inc<<endl;
    cout<<"Em percentual: 10 %"<<endl;
  }
  if(sal>= 1200.01 && sal<= 2000.00){
    inc = sal*0.07;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<sal+inc<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<inc<<endl;
    cout<<"Em percentual: 7 %"<<endl;
  }
  if(sal> 2000.00){
    inc = sal*0.04;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<sal+inc<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<inc<<endl;
    cout<<"Em percentual: 4 %"<<endl;
  }
  return 0;
}
