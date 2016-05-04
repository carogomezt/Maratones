#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double a, b, c, d;
  cin>>a>>b>>c>>d;
  double av= ((a*2)+(b*3)+(c*4)+(d*1))/10;
  cout<<fixed<<setprecision(1)<<"Media: "<<av<<endl;
  if(av>= 7.0)
    cout<<"Aluno aprovado."<<endl;
  if(av< 5.0)
    cout<<"Aluno reprovado."<<endl;
  if(av>=5.0 && av<=6.9){
    double n;
    cin>>n;
    cout<<"Aluno em exame."<<endl;
    cout<<fixed<<setprecision(1)<<"Nota do exame: "<<n<<endl,
    av = (av+n)/2.0;
    if(av>=5.0){
      cout<<"Aluno aprovado."<<endl;
    }
    else{
      cout<<"Aluno reprovado."<<endl;
    }
    cout<<fixed<<setprecision(1)<<"Media final: "<<av<<endl;
  }

  return 0;
}
