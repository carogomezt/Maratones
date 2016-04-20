#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string a, b;
	while(n--){
		cin>>a>>b;
		int aux=0, aux2;
		size_t found = a.find(b);
		
  		if (found!=string::npos){
  			aux2 = a.size() - b.size();
   			for (int i = a.size()-1; i > abs(aux2); i--)
  			{
  				cout<<a[i] << " "<<b[i]<<endl;

				if(a[i] == b[i]){
  					cout<<a[i] << " "<<b[i]<<endl;
  					aux++;
  				}
  				else{
  					continue;
  				}
  			}
  			if(aux == b.size())
  				cout<<"encaixa"<<endl;
  			else{
  				cout<<"nao encaixa"<<endl;
  			}
  		}
  		else{
  			cout<<"nao encaixa"<<endl;
  		}

	}
	return 0;
}